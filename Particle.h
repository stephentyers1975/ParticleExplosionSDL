/*
 * Particle.h
 *
 *  Created on: 25 Nov 2020
 *      Author: stephen.tyers
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace SteveSDLTest {

class Particle {
public:
	double m_x;
	double m_y;
private:

	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);

};

} /* namespace SteveSDLTest */

#endif /* PARTICLE_H_ */
