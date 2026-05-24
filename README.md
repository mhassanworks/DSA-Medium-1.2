

---

````markdown
<div align="center">

```
 ██████╗ ███╗   ███╗███╗   ██╗██╗ █████╗  ██████╗ ███████╗███╗   ██╗████████╗
██╔═══██╗████╗ ████║████╗  ██║██║██╔══██╗██╔════╝ ██╔════╝████╗  ██║╚══██╔══╝
██║   ██║██╔████╔██║██╔██╗ ██║██║███████║██║  ███╗█████╗  ██╔██╗ ██║   ██║   
██║   ██║██║╚██╔╝██║██║╚██╗██║██║██╔══██║██║   ██║██╔══╝  ██║╚██╗██║   ██║   
╚██████╔╝██║ ╚═╝ ██║██║ ╚████║██║██║  ██║╚██████╔╝███████╗██║ ╚████║   ██║   
 ╚═════╝ ╚═╝     ╚═╝╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚═╝  ╚═══╝   ╚═╝  
                    · A U T O N O M O U S  A G E N T  P L A T F O R M ·
```

# 🤖 OmniAgent

### *No-Code Multi-Agent Orchestration — Visual Canvas, Live Trace, Cost Controls*

<br/>

[![Next.js](https://img.shields.io/badge/Next.js-14-000000?style=for-the-badge&logo=nextdotjs&logoColor=white)](https://nextjs.org/)
[![FastAPI](https://img.shields.io/badge/FastAPI-Backend-009688?style=for-the-badge&logo=fastapi&logoColor=white)](https://fastapi.tiangolo.com/)
[![Python](https://img.shields.io/badge/Python-3.12+-3776AB?style=for-the-badge&logo=python&logoColor=white)](https://python.org/)
[![Node](https://img.shields.io/badge/Node.js-20+-339933?style=for-the-badge&logo=nodedotjs&logoColor=white)](https://nodejs.org/)
[![Redis](https://img.shields.io/badge/Redis-Streams-DC382D?style=for-the-badge&logo=redis&logoColor=white)](https://redis.io/)
[![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Open%20Beta-blueviolet?style=for-the-badge)]()

<br/>

> *"The best way to predict the future is to build the agents that create it."*

<br/>

</div>

---

## 📌 Table of Contents

| # | Section |
|---|---------|
| 01 | [What is OmniAgent?](#-what-is-omniagent) |
| 02 | [Core Features](#-core-features) |
| 03 | [Architecture](#-architecture) |
| 04 | [Repository Structure](#-repository-structure) |
| 05 | [Tech Stack](#-tech-stack) |
| 06 | [Quickstart](#-quickstart) |
| 07 | [Development Guide](#-development-guide) |
| 08 | [Deep Dives](#-deep-dives) |
| 09 | [CI & Deployment](#-ci--deployment) |
| 10 | [Roadmap](#-roadmap) |
| 11 | [Contributing](#-contributing) |
| 12 | [Author](#-author) |

---

## 🚀 What is OmniAgent?

**OmniAgent** is a no-code multi-agent orchestration platform that lets non-engineers compose, run, and monitor AI agent teams through a visual canvas. It combines a React Flow editor, real-time reasoning trace, cost controls, and a crew marketplace on top of a production multi-agent runtime.

### What Makes This Different

| ✅ Strength | 💡 Detail |
|------------|-----------|
| **No-Code Canvas** | Drag, drop, and wire agents together — zero code required |
| **Live Reasoning Trace** | Watch every agent thought and tool call stream in real time via Redis SSE |
| **Hard Cost Controls** | Per-run budget enforcement — crews halt before they overspend |
| **Human Approval Gates** | Pause any workflow step and require a human sign-off |
| **Crew Marketplace** | Publish, fork, and deploy community-built agent pipelines |
| **Persistent Memory** | ChromaDB vector store gives agents context across runs |
| **Dual Runtime** | CrewAI orchestration with AutoGen as fallback — resilient by default |
| **Full Observability** | LangSmith tracing integrated out of the box |

---

## ✨ Core Features

### 🎨 Visual Agent Canvas
Drag-and-drop graph editor powered by **React Flow**. Assign tools to agents, set token budgets per node, define execution order, and wire agent outputs to downstream inputs — entirely without code.

### ⚡ Live Reasoning Trace
Every agent thought, tool call, tool result, and final output streams in real time via **Redis Streams → SSE**. Fully collapsible, timestamped, and filterable per agent.

### 💸 Cost Controls & Budget Enforcement
Each crew run tracks token usage and maps it to cost in real time. Hard budget ceilings halt execution automatically before overspending — configurable per run or per agent node.

### 🔐 Human Approval Gates
Insert pause-and-approve checkpoints anywhere in a workflow. Sensitive actions — sending emails, writing to databases, calling external APIs — wait for an explicit human thumbs-up before continuing.

### 🛒 Crew Marketplace
Publish your agent pipelines for others to discover, fork, and run. Browse community-built crews and deploy them into your workspace with a single click.

### 🧠 Agent Memory
**ChromaDB** vector store backs persistent agent memory across runs. Agents recall prior context, uploaded documents, and past decisions automatically — no manual context passing needed.

---

## 🏗️ Architecture

OmniAgent is a three-tier system: a Next.js frontend canvas layer, a FastAPI orchestration backend, and a streaming data plane built on Redis Streams and SSE.

```
┌─────────────────────────────────────────────────────────────────────────┐
│  FRONTEND  ·  Next.js 14 + React Flow + Tailwind CSS + ShadCN UI        │
│                                                                         │
│  ┌────────────┐  ┌──────────────┐  ┌─────────────┐  ┌───────────────┐  │
│  │   Canvas   │  │  Live Trace  │  │  Dashboard  │  │  Marketplace  │  │
│  │ React Flow │  │  SSE client  │  │ Cost · Runs │  │ Publish · Fork│  │
│  └────────────┘  └──────────────┘  └─────────────┘  └───────────────┘  │
└───────────────────────────┬─────────────────────────────────────────────┘
                            │  REST / WebSocket
┌───────────────────────────▼─────────────────────────────────────────────┐
│  BACKEND  ·  FastAPI + CrewAI Orchestration + AutoGen Fallback           │
│                                                                         │
│  ┌────────────┐  ┌────────────┐  ┌─────────────┐  ┌───────────────┐    │
│  │  FastAPI   │  │   CrewAI   │  │   AutoGen   │  │  LangSmith    │    │
│  │ REST · WS  │  │   Runtime  │  │   Fallback  │  │   Tracing     │    │
│  └────────────┘  └────────────┘  └─────────────┘  └───────────────┘    │
└───────────────────────────┬─────────────────────────────────────────────┘
                            │
┌───────────────────────────▼─────────────────────────────────────────────┐
│  DATA LAYER                                                             │
│                                                                         │
│  ┌──────────────┐  ┌─────────────────┐  ┌──────────┐  ┌─────────────┐  │
│  │  PostgreSQL  │  │  Redis Streams  │  │ ChromaDB │  │  Docker /   │  │
│  │  Runs·Costs  │  │   Events → SSE  │  │  Memory  │  │    Helm     │  │
│  └──────────────┘  └─────────────────┘  └──────────┘  └─────────────┘  │
└─────────────────────────────────────────────────────────────────────────┘
```

---

## 📂 Repository Structure

```
omniagent/
│
├── 🖥️  APPS
│   ├── apps/api/                    ← FastAPI backend, agents, tools, SSE streaming
│   │   ├── agents/                  ← CrewAI agent definitions
│   │   ├── tools/                   ← Tool integrations (web, code, file, etc.)
│   │   ├── routes/                  ← REST endpoints and WebSocket handlers
│   │   └── streaming/               ← Redis Streams → SSE pipeline
│   │
│   ├── apps/web/                    ← Next.js 14 frontend
│   │   ├── canvas/                  ← React Flow agent graph editor
│   │   ├── trace/                   ← Live reasoning trace viewer
│   │   ├── dashboard/               ← Cost tracking and run history
│   │   └── marketplace/             ← Crew publish, browse, fork
│   │
│   └── apps/streamlit/              ← Lightweight UI for quick experimentation
│
├── 🏗️  INFRA
│   ├── infra/docker-compose.yml     ← Full local stack definition
│   ├── infra/helm/                  ← Kubernetes Helm charts
│   └── infra/terraform/             ← Cloud infrastructure scaffolding
│
├── 📜 SCRIPTS
│   ├── scripts/start-local.sh       ← Start PG + Redis + API + Web (macOS)
│   └── scripts/stop-local.sh        ← Graceful shutdown of all local services
│
├── 📁 logs/                         ← Runtime logs and PID files
├── .env.example                     ← Environment variable template
└── README.md
```

---

## ⚙️ Tech Stack

| Layer | Technology | Role |
|-------|------------|------|
| **Frontend** | Next.js 14 + React Flow | Visual canvas and UI shell |
| **Styling** | Tailwind CSS + ShadCN UI | Design system |
| **Backend** | FastAPI (Python 3.12+) | REST API and WebSocket server |
| **Orchestration** | CrewAI | Primary multi-agent runtime |
| **Fallback Runtime** | AutoGen | Secondary agent orchestration |
| **Streaming** | Redis Streams → SSE | Real-time reasoning trace delivery |
| **Database** | PostgreSQL | Run history, cost records, user data |
| **Vector Memory** | ChromaDB | Agent long-term memory store |
| **Observability** | LangSmith | Agent tracing and debugging |
| **Infra** | Docker Compose · Helm · Terraform | Local and cloud deployment |
| **Package Manager** | pnpm 9+ | Frontend dependency management |

---

## 🚀 Quickstart

### Prerequisites

```bash
# Python 3.12+
python --version    # Should be ≥ 3.12

# Node.js 20+
node --version      # Should be ≥ 20.0.0

# pnpm 9+
pnpm --version      # Should be ≥ 9.0.0

# Docker (optional, recommended)
docker --version
```

### Option A — Docker (Recommended)

```bash
# 1. Clone the repository
git clone https://github.com/your-username/omniagent.git
cd omniagent

# 2. Configure environment
cp .env.example .env
$EDITOR .env          # Fill in required API keys and config

# 3. Spin up the full stack
docker compose up --build
```

Expected output:
```
✓  postgres   healthy  on :5432
✓  redis      healthy  on :6379
✓  api        started  on :8000
✓  web        started  on :3000
```

```bash
# 4. Open the canvas
open http://localhost:3000
```

### Option B — Local Services (macOS)

```bash
# Starts PostgreSQL, Redis, FastAPI :8000, Next.js :3000, Streamlit :8501
./scripts/start-local.sh
```

---

## 🛠️ Development Guide

### Health Checks

```bash
# API health
curl http://127.0.0.1:8000/health
# → {"status":"ok","version":"0.1.0"}

# Web health
curl -I http://localhost:3000
# → HTTP/1.1 200 OK
```

### Stop Local Services

```bash
# Graceful shutdown
./scripts/stop-local.sh

# Or kill by port if services are stuck
lsof -t -iTCP:3000 -sTCP:LISTEN | xargs -r kill
lsof -t -iTCP:8000 -sTCP:LISTEN | xargs -r kill
```

### Logs

```bash
# All service logs are written to logs/
tail -f logs/api.log
tail -f logs/web.log
tail -f logs/redis.log
```

### Environment Variables

```bash
# Required — fill these in .env before starting
OPENAI_API_KEY=sk-...
DATABASE_URL=postgresql://user:pass@localhost:5432/omniagent
REDIS_URL=redis://localhost:6379
LANGCHAIN_API_KEY=ls-...           # LangSmith tracing
LANGCHAIN_TRACING_V2=true

# Optional
STREAMLIT_PORT=8501
LOG_LEVEL=info
MAX_TOKENS_PER_RUN=100000
```

---

## 🔬 Deep Dives

<details>
<summary><strong>🔹 Redis Streams → SSE — How Live Trace Works</strong></summary>

<br/>

Every agent event (thought, tool call, result, error) is published to a Redis Stream. A FastAPI SSE endpoint subscribes to the stream and pushes events to the browser in real time.

```python
# Backend: publish agent event to Redis Stream
async def publish_event(run_id: str, event: AgentEvent):
    await redis.xadd(
        f"run:{run_id}:events",
        {
            "type":    event.type,          # "thought" | "tool_call" | "result"
            "agent":   event.agent_name,
            "content": event.content,
            "ts":      event.timestamp,
        }
    )

# Backend: SSE endpoint streams events to the browser
@app.get("/runs/{run_id}/stream")
async def stream_run(run_id: str):
    async def event_generator():
        last_id = "0"
        while True:
            events = await redis.xread(
                {f"run:{run_id}:events": last_id}, block=1000
            )
            for stream, messages in events:
                for msg_id, data in messages:
                    last_id = msg_id
                    yield f"data: {json.dumps(data)}\n\n"
    return StreamingResponse(event_generator(), media_type="text/event-stream")
```

```typescript
// Frontend: consume the SSE stream and update trace UI
const source = new EventSource(`/api/runs/${runId}/stream`);
source.onmessage = (e) => {
  const event = JSON.parse(e.data);
  appendToTrace(event);          // adds to live reasoning trace panel
};
```

**Latency:** ~10–50ms end-to-end from agent thought to browser render.

</details>

<details>
<summary><strong>🔹 Cost Tracking — How Budget Enforcement Works</strong></summary>

<br/>

Every LLM call is intercepted by a cost middleware that tracks token usage and maps it to dollar cost. When cumulative cost exceeds the run budget, the crew is halted mid-execution.

```python
class CostEnforcementMiddleware:
    def __init__(self, budget_usd: float, run_id: str):
        self.budget   = budget_usd
        self.spent    = 0.0
        self.run_id   = run_id

    def on_llm_end(self, response: LLMResult):
        usage     = response.llm_output["token_usage"]
        cost      = self._calculate_cost(usage)
        self.spent += cost

        # Persist to PostgreSQL for dashboard
        db.update_run_cost(self.run_id, self.spent)

        # Hard halt if over budget
        if self.spent >= self.budget:
            raise BudgetExceededError(
                f"Run halted: ${self.spent:.4f} spent, budget ${self.budget:.2f}"
            )

    def _calculate_cost(self, usage: dict) -> float:
        # Pricing per model (per 1M tokens)
        rates = {"gpt-4o": (5.00, 15.00), "gpt-4o-mini": (0.15, 0.60)}
        input_rate, output_rate = rates.get(self.model, (0, 0))
        return (
            usage["prompt_tokens"]     / 1_000_000 * input_rate +
            usage["completion_tokens"] / 1_000_000 * output_rate
        )
```

</details>

<details>
<summary><strong>🔹 Human Approval Gates — How They Pause Execution</strong></summary>

<br/>

Approval gates are first-class nodes on the canvas. When execution reaches a gate, the run suspends, stores its state in PostgreSQL, and sends a notification. A human approves or rejects via the dashboard, and the run resumes from exactly where it stopped.

```python
class HumanApprovalGate:
    async def execute(self, context: RunContext) -> GateResult:
        # Suspend the run and store full state
        await db.suspend_run(
            run_id  = context.run_id,
            state   = context.serialize(),
            gate_id = self.gate_id,
        )
        await notify.send_approval_request(context.run_id, self.gate_id)

        # Poll until approved or rejected (with timeout)
        for _ in range(self.timeout_seconds):
            decision = await db.get_gate_decision(context.run_id, self.gate_id)
            if decision == "approved":
                return GateResult.CONTINUE
            if decision == "rejected":
                return GateResult.HALT
            await asyncio.sleep(1)

        return GateResult.TIMEOUT
```

</details>

<details>
<summary><strong>🔹 CrewAI + AutoGen Fallback — Dual Runtime Strategy</strong></summary>

<br/>

OmniAgent uses **CrewAI** as the primary orchestration runtime. If a crew fails to initialize (model unavailable, config error, rate limit), the system automatically falls back to **AutoGen** and retries the same workflow definition.

```python
async def run_crew(workflow: WorkflowDefinition, run_id: str) -> RunResult:
    try:
        crew = CrewAIAdapter(workflow)
        return await crew.kickoff(run_id=run_id)

    except CrewAIInitError as e:
        logger.warning(f"CrewAI failed ({e}), falling back to AutoGen")
        await publish_event(run_id, AgentEvent(
            type    = "system",
            content = "Switching to AutoGen runtime",
        ))
        agent = AutoGenAdapter(workflow)
        return await agent.run(run_id=run_id)
```

</details>

<details>
<summary><strong>🔹 Agent Memory — ChromaDB Vector Store Integration</strong></summary>

<br/>

Each agent has a persistent memory namespace in ChromaDB. On every run, the agent retrieves semantically similar past context before generating a response, and stores new knowledge after the run completes.

```python
class AgentMemory:
    def __init__(self, agent_id: str):
        self.collection = chroma_client.get_or_create_collection(
            name     = f"agent_{agent_id}",
            metadata = {"hnsw:space": "cosine"},
        )

    async def recall(self, query: str, top_k: int = 5) -> list[str]:
        results = self.collection.query(
            query_texts = [query],
            n_results   = top_k,
        )
        return results["documents"][0]

    async def store(self, content: str, metadata: dict):
        self.collection.add(
            documents = [content],
            ids       = [str(uuid4())],
            metadatas = [metadata],
        )
```

</details>

---

## 🚢 CI & Deployment

### GitHub Actions CI

```yaml
# Runs on every push and pull request
jobs:
  api:
    - Lint with ruff
    - Type check with mypy
    - Run pytest suite

  web:
    - pnpm install
    - next build
    - Type check with tsc
```

### Docker Deployment

```bash
# Build and tag images
docker build -t omniagent-api ./apps/api
docker build -t omniagent-web ./apps/web

# Push to registry
docker push your-registry/omniagent-api:latest
docker push your-registry/omniagent-web:latest
```

### Kubernetes (Helm)

```bash
# Install with Helm
helm install omniagent ./infra/helm \
  --set image.tag=latest \
  --set env.DATABASE_URL=$DATABASE_URL \
  --set env.REDIS_URL=$REDIS_URL

# Upgrade
helm upgrade omniagent ./infra/helm --set image.tag=v1.1.0
```

---

## 🔮 Roadmap

### 🔜 Upcoming in v0.2

- [ ] **Tool Library** — Prebuilt tools: web search, code execution, file I/O, browser control
- [ ] **Agent Templates** — One-click starter agents for common use cases
- [ ] **Run Replay** — Scrub through any past run's reasoning trace
- [ ] **Webhook Triggers** — Start crews from external events (GitHub, Slack, HTTP)
- [ ] **Multi-Model Support** — Per-agent model selection (GPT-4o, Claude, Gemini)

### 📅 Planned for v1.0

- [ ] **Crew Marketplace** — Full publish, fork, and rating system
- [ ] **Kubernetes Autoscaling** — HPA for the agent runtime pods
- [ ] **SSO & Teams** — Workspace-level auth, member roles, shared crews
- [ ] **Scheduled Runs** — Cron-based crew execution
- [ ] **Audit Log** — Full immutable log of every agent action across all runs
- [ ] **Self-Hosted LLMs** — Ollama and vLLM backend support

---

## 🤝 Contributing

All contributions — new features, bug fixes, better docs, new tool integrations — are welcome.

### Contribution Workflow

```bash
# 1. Fork this repository

# 2. Clone your fork
git clone https://github.com/YOUR-USERNAME/omniagent.git
cd omniagent

# 3. Create a descriptive branch
git checkout -b feature/add-webhook-trigger

# 4. Set up your environment
cp .env.example .env
./scripts/start-local.sh

# 5. Make your changes — use this header on new API files:
```

```python
"""
Feature  : Webhook Trigger
Module   : apps/api/routes/webhooks.py
Purpose  : Accept external HTTP events and start crew runs
Author   : Your Name
"""
```

```bash
# 6. Verify everything passes
g++ -std=c++17 -Wall ...   # if adding C++ tooling
pytest apps/api/tests/
cd apps/web && pnpm build

# 7. Commit with a clear message
git commit -m "feat: Add webhook trigger endpoint for external run starts"

# 8. Push and open a Pull Request
git push origin feature/add-webhook-trigger
```

### Contribution Standards

- New API routes must include docstrings with **purpose, inputs, outputs**
- New canvas nodes must include a **JSON schema** for their config panel
- All Python must pass `ruff` lint and `mypy` type checks
- All frontend must pass `tsc --noEmit`
- One feature per PR; keep diffs focused and reviewable

---

## 📜 License

Open-source under the **MIT License**. See [`LICENSE`](LICENSE) for full terms.

---

## 👨‍💻 Author

<div align="center">

### Your Name

*AI systems builder · Agent infrastructure · Full-stack engineer*

[![GitHub](https://img.shields.io/badge/GitHub-your--username-181717?style=for-the-badge&logo=github)](https://github.com/your-username)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Your%20Name-0A66C2?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/your-profile)

</div>

---

<div align="center">

## ⭐ Support This Project

*If OmniAgent saved you time, helped you ship, or just sparked an idea — drop a star. It keeps the project growing.*

[![Star this repo](https://img.shields.io/github/stars/your-username/omniagent?style=social)](https://github.com/your-username/omniagent)

<br/>

```
Built with FastAPI · Orchestrated by CrewAI · Streamed via Redis · Visualized with React Flow
```

<br/>

**© 2024 Your Name · MIT License**

</div>
````

---

Just replace `your-username`, `Your Name`, and the LinkedIn URL with your actual details and it's ready to drop straight into your `README.md`.
