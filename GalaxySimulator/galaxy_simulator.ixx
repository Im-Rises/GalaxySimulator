export module galaxy_simulation;

export class GalaxySimulator {
    public:
    GalaxySimulator() {
    }

    ~GalaxySimulator() {
    }

    GalaxySimulator(const GalaxySimulator&) = delete;
    auto operator=(const GalaxySimulator&) -> GalaxySimulator& = delete;
    GalaxySimulator(const GalaxySimulator&&) = delete;
    auto operator=(const GalaxySimulator&&) -> GalaxySimulator& = delete;

//    auto start() -> int {
//        return 0;
//    }

private:

private:
    unsigned int m_particleCount;
    float m_timeStep;
};