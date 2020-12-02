/*
 * Swarm.cpp
 *
 *  Created on: 25 Nov 2020
 *      Author: stephen.tyers
 */

#include "Swarm.h"

namespace SteveSDLTest {

Swarm::Swarm(): lastTime(0) {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete[] m_pParticles;
}

void Swarm::update(int elapsed) {

	int interval = elapsed - lastTime;

	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_pParticles[i].update(interval);
	}
	lastTime = elapsed;
}

} /* namespace SteveSDLTest */
