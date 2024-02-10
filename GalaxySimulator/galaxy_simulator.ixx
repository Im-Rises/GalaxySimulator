export module galaxy_simulation;

import <glm/glm.hpp>;
import <vector>;

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

public:

private:

private:
    unsigned int m_particleCount;
    float m_timeStep;

    std::vector<glm::vec3> m_positions;
};