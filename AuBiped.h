// The Audition Online Biped.
// Used for 3D Modeling and Animation
//**************************************************************************/
// AUTHOR: Daylon
//**************************************************************************/

#include <string>

#define HUMAN_ROOT_ID					0
#define HUMAN_FOOTSTEPS_ID				1
#define HUMAN_PELVIS_ID					2
#define HUMAN_SPINE_ID					3
#define HUMAN_SPINE1_ID					4
#define HUMAN_NECK_ID					5
#define HUMAN_HEAD_ID					6
#define HUMAN_LEFT_CLAVICLE_ID			7
#define HUMAN_LEFT_UPPERARM_ID			8
#define HUMAN_LEFT_FOREARM_ID			9
#define HUMAN_LEFT_HAND_ID				10
#define HUMAN_LEFT_FINGER_ID			11
#define HUMAN_RIGHT_CLAVICLE_ID			12
#define HUMAN_RIGHT_UPPERARM_ID			13
#define HUMAN_RIGHT_FOREARM_ID			14
#define HUMAN_RIGHT_HAND_ID				15
#define HUMAN_RIGHT_FINGER_ID			16
#define HUMAN_LEFT_THIGH_ID				17
#define HUMAN_LEFT_CALF_ID				18
#define HUMAN_LEFT_FOOT_ID				19
#define HUMAN_LEFT_TOE_ID				20
#define HUMAN_RIGHT_THIGH_ID			21
#define HUMAN_RIGHT_CALF_ID				22
#define HUMAN_RIGHT_FOOT_ID				23
#define HUMAN_RIGHT_TOE_ID				24

#define PET_ROOT_ID						0
#define PET_FOOTSTEPS_ID				1
#define PET_PELVIS_ID					2
#define PET_SPINE_ID					3
#define PET_SPINE1_ID					4
#define PET_NECK_ID						5
#define PET_HEAD_ID						6
#define PET_LEFT_CLAVICLE_ID			7
#define PET_LEFT_UPPERARM_ID			8
#define PET_LEFT_FOREARM_ID				9
#define PET_LEFT_HAND_ID				10
#define PET_LEFT_FINGER_ID				11
#define PET_RIGHT_CLAVICLE_ID			12
#define PET_RIGHT_UPPERARM_ID			13
#define PET_RIGHT_FOREARM_ID			14
#define PET_RIGHT_HAND_ID				15
#define PET_RIGHT_FINGER_ID				16
#define PET_LEFT_THIGH_ID				17
#define PET_LEFT_CALF_ID				18
#define PET_LEFT_FOOT_ID				19
#define PET_LEFT_TOE_ID					20
#define PET_RIGHT_THIGH_ID				21
#define PET_RIGHT_CALF_ID				22
#define PET_RIGHT_FOOT_ID				23
#define PET_RIGHT_TOE_ID				24
#define PET_PONYTAIL1_ID				25 //Ponytail1
#define PET_PONYTAIL11_ID				26 //Ponytail11
#define PET_PONYTAIL2_ID				27 //Ponytail2
#define PET_PONYTAIL21_ID				28 //Ponytail21
#define PET_LEFT_HORSELINK_ID			29 //L HorseLink
#define PET_RIGHT_HORSELINK_ID			30 //R HorseLink
#define PET_TAIL_ID						31
#define PET_TAIL1_ID					32
#define PET_TAIL2_ID					33

#define HUMAN_ROOT_NAME					"Bip01"
#define HUMAN_FOOTSTEPS_NAME			"Bip01 Footsteps"
#define HUMAN_PELVIS_NAME				"Bip01 Pelvis"
#define HUMAN_SPINE_NAME				"Bip01 Spine"
#define HUMAN_SPINE1_NAME				"Bip01 Spine1"
#define HUMAN_NECK_NAME					"Bip01 Neck"
#define HUMAN_HEAD_NAME					"Bip01 Head"
#define HUMAN_LEFT_CLAVICLE_NAME		"Bip01 L Clavicle"
#define HUMAN_LEFT_UPPERARM_NAME		"Bip01 L UpperArm"
#define HUMAN_LEFT_FOREARM_NAME			"Bip01 L Forearm"
#define HUMAN_LEFT_HAND_NAME			"Bip01 L Hand"
#define HUMAN_LEFT_FINGER_NAME			"Bip01 L Finger0"
#define HUMAN_RIGHT_CLAVICLE_NAME		"Bip01 R Clavicle"
#define HUMAN_RIGHT_UPPERARM_NAME		"Bip01 R UpperArm"
#define HUMAN_RIGHT_FOREARM_NAME		"Bip01 R Forearm"
#define HUMAN_RIGHT_HAND_NAME			"Bip01 R Hand"
#define HUMAN_RIGHT_FINGER_NAME			"Bip01 R Finger0"
#define HUMAN_LEFT_THIGH_NAME			"Bip01 L Thigh"
#define HUMAN_LEFT_CALF_NAME			"Bip01 L Calf"
#define HUMAN_LEFT_FOOT_NAME			"Bip01 L Foot"
#define HUMAN_LEFT_TOE_NAME				"Bip01 L Toe0"
#define HUMAN_RIGHT_THIGH_NAME			"Bip01 R Thigh"
#define HUMAN_RIGHT_CALF_NAME			"Bip01 R Calf"
#define HUMAN_RIGHT_FOOT_NAME			"Bip01 R Foot"
#define HUMAN_RIGHT_TOE_NAME			"Bip01 R Toe0"

#define PET_ROOT_NAME					"Bip01"
#define PET_FOOTSTEPS_NAME				"Bip01 Footsteps"
#define PET_PELVIS_NAME					"Bip01 Pelvis"
#define PET_SPINE_NAME					"Bip01 Spine"
#define PET_SPINE1_NAME					"Bip01 Spine1"
#define PET_NECK_NAME					"Bip01 Neck"
#define PET_HEAD_NAME					"Bip01 Head"
#define PET_LEFT_CLAVICLE_NAME			"Bip01 L Clavicle"
#define PET_LEFT_UPPERARM_NAME			"Bip01 L UpperArm"
#define PET_LEFT_FOREARM_NAME			"Bip01 L Forearm"
#define PET_LEFT_HAND_NAME				"Bip01 L Hand"
#define PET_LEFT_FINGER_NAME			"Bip01 L Finger0"
#define PET_RIGHT_CLAVICLE_NAME			"Bip01 R Clavicle"
#define PET_RIGHT_UPPERARM_NAME			"Bip01 R UpperArm"
#define PET_RIGHT_FOREARM_NAME			"Bip01 R Forearm"
#define PET_RIGHT_HAND_NAME				"Bip01 R Hand"
#define PET_RIGHT_FINGER_NAME			"Bip01 R Finger0"
#define PET_LEFT_THIGH_NAME				"Bip01 L Thigh"
#define PET_LEFT_CALF_NAME				"Bip01 L Calf"
#define PET_LEFT_FOOT_NAME				"Bip01 L Foot"
#define PET_LEFT_TOE_NAME				"Bip01 L Toe0"
#define PET_RIGHT_THIGH_NAME			"Bip01 R Thigh"
#define PET_RIGHT_CALF_NAME				"Bip01 R Calf"
#define PET_RIGHT_FOOT_NAME				"Bip01 R Foot"
#define PET_RIGHT_TOE_NAME				"Bip01 R Toe0"
#define PET_PONYTAIL1_NAME				"Bip01 Ponytail1"
#define PET_PONYTAIL11					"Bip01 Ponytail11"
#define PET_PONYTAIL2					"Bip01 Ponytail2"
#define PET_PONYTAIL21					"Bip01 Ponytail21"
#define PET_LEFT_HORSELINK				"Bip01 L HorseLink"
#define PET_RIGHT_HORSELINK				"Bip01 R HorseLink"
#define PET_TAIL						"Bip01 Tail"
#define PET_TAIL1						"Bip01 Tail1"
#define PET_TAIL2						"Bip01 Tail2"

class AuBiped
{
public:
	int GetBipedIDFromName(std::string name);
	std::string GetBipedNameFromID(int id);
};