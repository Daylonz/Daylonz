#include "AuBiped.h"

using namespace std;


int AuBiped::GetBipedIDFromName(string name)
{
	if (name.compare(HUMAN_ROOT_NAME) == 0)
		return HUMAN_ROOT_ID;
	if (name.compare(HUMAN_FOOTSTEPS_NAME) == 0)
		return HUMAN_FOOTSTEPS_ID;
	if (name.compare(HUMAN_PELVIS_NAME) == 0)
		return HUMAN_PELVIS_ID;
	if (name.compare(HUMAN_SPINE_NAME) == 0)
		return HUMAN_SPINE_ID;
	if (name.compare(HUMAN_SPINE1_NAME) == 0)
		return HUMAN_SPINE1_ID;
	if (name.compare(HUMAN_NECK_NAME) == 0)
		return HUMAN_NECK_ID;
	if (name.compare(HUMAN_HEAD_NAME) == 0)
		return HUMAN_HEAD_ID;
	if (name.compare(HUMAN_LEFT_CLAVICLE_NAME) == 0)
		return HUMAN_LEFT_CLAVICLE_ID;
	if (name.compare(HUMAN_LEFT_UPPERARM_NAME) == 0)
		return HUMAN_LEFT_UPPERARM_ID;
	if (name.compare(HUMAN_LEFT_FOREARM_NAME) == 0)
		return HUMAN_LEFT_FOREARM_ID;
	if (name.compare(HUMAN_LEFT_HAND_NAME) == 0)
		return HUMAN_LEFT_HAND_ID;
	if (name.compare(HUMAN_LEFT_FINGER_NAME) == 0)
		return HUMAN_LEFT_FINGER_ID;
	if (name.compare(HUMAN_RIGHT_CLAVICLE_NAME) == 0)
		return HUMAN_RIGHT_CLAVICLE_ID;
	if (name.compare(HUMAN_RIGHT_UPPERARM_NAME) == 0)
		return HUMAN_RIGHT_UPPERARM_ID;
	if (name.compare(HUMAN_RIGHT_FOREARM_NAME) == 0)
		return HUMAN_RIGHT_FOREARM_ID;
	if (name.compare(HUMAN_RIGHT_HAND_NAME) == 0)
		return HUMAN_RIGHT_HAND_ID;
	if (name.compare(HUMAN_RIGHT_FINGER_NAME) == 0)
		return HUMAN_RIGHT_FINGER_ID;
	if (name.compare(HUMAN_LEFT_THIGH_NAME) == 0)
		return HUMAN_LEFT_THIGH_ID;
	if (name.compare(HUMAN_LEFT_CALF_NAME) == 0)
		return HUMAN_LEFT_CALF_ID;
	if (name.compare(HUMAN_LEFT_FOOT_NAME) == 0)
		return HUMAN_LEFT_FOOT_ID;
	if (name.compare(HUMAN_LEFT_TOE_NAME) == 0)
		return HUMAN_LEFT_TOE_ID;
	if (name.compare(HUMAN_RIGHT_THIGH_NAME) == 0)
		return HUMAN_RIGHT_THIGH_ID;
	if (name.compare(HUMAN_RIGHT_CALF_NAME) == 0)
		return HUMAN_RIGHT_CALF_ID;
	if (name.compare(HUMAN_RIGHT_FOOT_NAME) == 0)
		return HUMAN_RIGHT_FOOT_ID;
	if (name.compare(HUMAN_RIGHT_TOE_NAME) == 0)
		return HUMAN_RIGHT_TOE_ID;
	return -1;
}

string AuBiped::GetBipedNameFromID(int id)
{
	switch (id)
	{
	case HUMAN_ROOT_ID:
		return HUMAN_ROOT_NAME;
	case HUMAN_FOOTSTEPS_ID:
		return HUMAN_FOOTSTEPS_NAME;
	case HUMAN_PELVIS_ID:
		return HUMAN_PELVIS_NAME;
	case HUMAN_SPINE_ID:
		return HUMAN_SPINE_NAME;
	case HUMAN_SPINE1_ID:
		return HUMAN_SPINE1_NAME;
	case HUMAN_NECK_ID:
		return HUMAN_NECK_NAME;
	case HUMAN_HEAD_ID:
		return HUMAN_HEAD_NAME;
	case HUMAN_LEFT_CLAVICLE_ID:
		return HUMAN_LEFT_CLAVICLE_NAME;
	case HUMAN_LEFT_UPPERARM_ID:
		return HUMAN_LEFT_UPPERARM_NAME;
	case HUMAN_LEFT_FOREARM_ID:
		return HUMAN_LEFT_FOREARM_NAME;
	case HUMAN_LEFT_HAND_ID:
		return HUMAN_LEFT_HAND_NAME;
	case HUMAN_LEFT_FINGER_ID:
		return HUMAN_LEFT_FINGER_NAME;
	case HUMAN_RIGHT_CLAVICLE_ID:
		return HUMAN_RIGHT_CLAVICLE_NAME;
	case HUMAN_RIGHT_UPPERARM_ID:
		return HUMAN_RIGHT_UPPERARM_NAME;
	case HUMAN_RIGHT_FOREARM_ID:
		return HUMAN_RIGHT_FOREARM_NAME;
	case HUMAN_RIGHT_HAND_ID:
		return HUMAN_RIGHT_HAND_NAME;
	case HUMAN_RIGHT_FINGER_ID:
		return HUMAN_RIGHT_FINGER_NAME;
	case HUMAN_LEFT_THIGH_ID:
		return HUMAN_LEFT_THIGH_NAME;
	case HUMAN_LEFT_CALF_ID:
		return HUMAN_LEFT_CALF_NAME;
	case HUMAN_LEFT_FOOT_ID:
		return HUMAN_LEFT_FOOT_NAME;
	case HUMAN_LEFT_TOE_ID:
		return HUMAN_LEFT_TOE_NAME;
	case HUMAN_RIGHT_THIGH_ID:
		return HUMAN_RIGHT_THIGH_NAME;
	case HUMAN_RIGHT_CALF_ID:
		return HUMAN_RIGHT_CALF_NAME;
	case HUMAN_RIGHT_FOOT_ID:
		return HUMAN_RIGHT_FOOT_NAME;
	case HUMAN_RIGHT_TOE_ID:
		return HUMAN_RIGHT_TOE_NAME;
	}
	return NULL;
}