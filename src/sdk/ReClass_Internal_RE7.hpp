// Created with ReClass.NET 1.2 by KN4CK3R

class N0000000A
{
public:
	char pad_0000[24]; //0x0000
	class N0000005F *N0000000E; //0x0018
	char pad_0020[280]; //0x0020
}; //Size: 0x0138
static_assert(sizeof(N0000000A) == 0x138);

class N0000005F
{
public:
	char pad_0000[16]; //0x0000
	class N0000007A *N00000062; //0x0010
	class N00000085 *N00000063; //0x0018
	char pad_0020[168]; //0x0020
}; //Size: 0x00C8
static_assert(sizeof(N0000005F) == 0xC8);

class N0000007A
{
public:
	char pad_0000[40]; //0x0000
	uint32_t N00000080; //0x0028
	char pad_002C[28]; //0x002C
}; //Size: 0x0048
static_assert(sizeof(N0000007A) == 0x48);

class N00000085
{
public:
	char pad_0000[32]; //0x0000
	uint32_t N0000008A; //0x0020
	char pad_0024[36]; //0x0024
}; //Size: 0x0048
static_assert(sizeof(N00000085) == 0x48);

class ManagedTypes
{
public:
	class REClassInfo *types[2048]; //0x0000
}; //Size: 0x4000
static_assert(sizeof(ManagedTypes) == 0x4000);

class N0000019E
{
public:
	char pad_0000[104]; //0x0000
	class N00000369 *N000001AC; //0x0068
	class N000001C9 *N000001AD; //0x0070
	char pad_0078[208]; //0x0078
}; //Size: 0x0148
static_assert(sizeof(N0000019E) == 0x148);

class N000001C9
{
public:
	class N0000019E *parent; //0x0000
	void* N000001CB; //0x0008
	char pad_0010[40]; //0x0010
	void* N000001D1; //0x0038
	char pad_0040[8]; //0x0040
	void* N000001D3; //0x0048
	char pad_0050[16]; //0x0050
	class N000001FF *N000001D6; //0x0060
	char pad_0068[8]; //0x0068
}; //Size: 0x0070
static_assert(sizeof(N000001C9) == 0x70);

class N000001FF
{
public:
	char pad_0000[120]; //0x0000
}; //Size: 0x0078
static_assert(sizeof(N000001FF) == 0x78);

class N0000027C
{
public:
	class N000002D1 *N0000027D; //0x0000
	char pad_0008[104]; //0x0008
	class N000002A6 *N0000028B; //0x0070
	char pad_0078[200]; //0x0078
}; //Size: 0x0140
static_assert(sizeof(N0000027C) == 0x140);

class N000002A6
{
public:
	char pad_0000[328]; //0x0000
}; //Size: 0x0148
static_assert(sizeof(N000002A6) == 0x148);

class N000002D1
{
public:
	char pad_0000[72]; //0x0000
}; //Size: 0x0048
static_assert(sizeof(N000002D1) == 0x48);

class N00000369
{
public:
	class N0000039C *N0000036A; //0x0000
	char pad_0008[320]; //0x0008
}; //Size: 0x0148
static_assert(sizeof(N00000369) == 0x148);

class N0000039C
{
public:
	char pad_0000[72]; //0x0000
}; //Size: 0x0048
static_assert(sizeof(N0000039C) == 0x48);

class CameraTypePtr
{
public:
	class REType *N000003AA; //0x0000
}; //Size: 0x0008
static_assert(sizeof(CameraTypePtr) == 0x8);

class REType
{
public:
	void *N000003B4; //0x0000
	uint32_t classIndex; //0x0008
	char pad_000C[4]; //0x000C
	uint64_t fastClassIndex; //0x0010
	char pad_0018[8]; //0x0018
	uint32_t flags; //0x0020 < 0 == NoneType, 1 == abstract, 2 == concrete, 256 == interface, 16384 == root
	char pad_0024[4]; //0x0024
	char *name; //0x0028
	uint32_t parentFqn; //0x0030
	char pad_0034[4]; //0x0034
	uint32_t size; //0x0038
	char pad_003C[36]; //0x003C
	class REType *super; //0x0060
	class REType *childType; //0x0068
	class REType *chainType; //0x0070
	char pad_0078[256]; //0x0078
	class REFieldList *fields; //0x0178
	class REObjectInfo *classInfo; //0x0180 is a managed type if this is not null
	uint32_t typeCRC; //0x0188
	char pad_018C[4]; //0x018C
}; //Size: 0x0190
static_assert(sizeof(REType) == 0x190);

class N000003DE
{
public:
	char pad_0000[8]; //0x0000
	class N000008E5 *N000003E0; //0x0008
	char pad_0010[312]; //0x0010
}; //Size: 0x0148
static_assert(sizeof(N000003DE) == 0x148);

class REObject
{
public:
	void* vtable; //0x0000
}; //Size: 0x0008
static_assert(sizeof(REObject) == 0x8);

class REManagedObject : public REObject
{
public:
	uint32_t referenceCount; //0x0008
	int16_t N000071AE; //0x000C
	char pad_000E[2]; //0x000E
	uint32_t N000047D5; //0x0010
	uint32_t N000047EE; //0x0014
	class REObjectInfo *info; //0x0018
}; //Size: 0x0020
static_assert(sizeof(REManagedObject) == 0x20);

class REComponent : public REManagedObject
{
public:
	class REGameObject *ownerGameObject; //0x0020
	class REComponent *childComponent; //0x0028
	class REComponent *prevComponent; //0x0030
	class REComponent *nextComponent; //0x0038
}; //Size: 0x0040
static_assert(sizeof(REComponent) == 0x40);

class RECamera : public REComponent
{
public:
	float nearClipPlane; //0x0040
	float farClipPlane; //0x0044
	float fov; //0x0048
	float lookAtDistance; //0x004C
	bool verticalEnable; //0x0050
	char pad_0051[3]; //0x0051
	float aspectRatio; //0x0054
	int32_t N00000451; //0x0058
	char pad_005C[4]; //0x005C
	int32_t cameraType; //0x0060
	char pad_0064[12]; //0x0064
	wchar_t *cameraName; //0x0070
	uint32_t N00000455; //0x0078
	char pad_007C[32]; //0x007C
	float N00000D40; //0x009C
	float N0000045A; //0x00A0
	float N00000D43; //0x00A4
	float N0000045B; //0x00A8
	char pad_00AC[252]; //0x00AC
}; //Size: 0x01A8
static_assert(sizeof(RECamera) == 0x1A8);

class REString
{
public:
	char pad_0000[24]; //0x0000
	int32_t length; //0x0018 if len >= 12, is a pointer
	int32_t maxLength; //0x001C
}; //Size: 0x0020
static_assert(sizeof(REString) == 0x20);

class REGameObject : public REManagedObject
{
public:
	char pad_0020[2]; //0x0020
	bool shouldUpdate; //0x0022
	bool shouldDraw; //0x0023
	bool shouldUpdateSelf; //0x0024
	bool shouldDrawSelf; //0x0025
	bool shouldSelect; //0x0026
	char pad_0027[1]; //0x0027
	class RETransform *transform; //0x0028
	class REFolder *folder; //0x0030
	class REString name; //0x0038 This can either be a pointer to the name or embedded directly
	uint32_t N00000DDA; //0x0058
	float timescale; //0x005C
	char pad_0060[16]; //0x0060
}; //Size: 0x0070
static_assert(sizeof(REGameObject) == 0x70);

class REFieldList
{
public:
	class FunctionHolder **(*methods)[4000]; //0x0000
	int32_t num; //0x0008
	int32_t maxItems; //0x000C
	char pad_0010[16]; //0x0010
	class REVariableList *variables; //0x0020
	char pad_0028[8]; //0x0028
	void* deserializer; //0x0030
	uint32_t N00000730; //0x0038
	char pad_003C[4]; //0x003C
}; //Size: 0x0040
static_assert(sizeof(REFieldList) == 0x40);

class N0000074B
{
public:
	class FunctionHolder **N0000074C[2048]; //0x0000
}; //Size: 0x4000
static_assert(sizeof(N0000074B) == 0x4000);

class N00000756
{
public:
	class FunctionHolder *func; //0x0000
}; //Size: 0x0008
static_assert(sizeof(N00000756) == 0x8);

class FunctionHolder
{
public:
	class FunctionDescriptor *descriptor; //0x0000
	char pad_0008[24]; //0x0008
}; //Size: 0x0020
static_assert(sizeof(FunctionHolder) == 0x20);

class FunctionDescriptor
{
public:
	char *name; //0x0000
	class MethodParamInfo (*params)[256]; //0x0008
	char pad_0010[4]; //0x0010
	int32_t numParams; //0x0014
	void* functionPtr; //0x0018
	uint32_t returnTypeFlag; //0x0020 AND 1F = via::reflection::TypeKind
	uint32_t typeIndex; //0x0024
	char pad_0028[32]; //0x0028
	char *returnTypeName; //0x0048
	char pad_0050[8]; //0x0050
}; //Size: 0x0058
static_assert(sizeof(FunctionDescriptor) == 0x58);

class REJointArray
{
public:
	class N00003745 *data; //0x0000
	int32_t size; //0x0008
	int32_t numAllocated; //0x000C
	class JointMatrices *matrices; //0x0010
	char pad_0018[256]; //0x0018
}; //Size: 0x0118
static_assert(sizeof(REJointArray) == 0x118);

class RETransform : public REComponent
{
public:
	Vector4f position; //0x0040
	Vector4f angles; //0x0050
	Vector4f scale; //0x0060
	class REScene *scene; //0x0070
	class RETransform *child; //0x0078
	class RETransform *next; //0x0080
	class RETransform *parentTransform; //0x0088
	Matrix4x4f worldTransform; //0x0090
	class N00007EEE *N000007D8; //0x00D0
	int32_t N00000804; //0x00D8
	uint32_t tickCount; //0x00DC
	bool sameJointsConstraint; //0x00E0
	bool N0000081A; //0x00E1
	char pad_00E2[1]; //0x00E2
	bool absoluteScaling; //0x00E3
	char pad_00E4[4]; //0x00E4
	class REJointArray joints; //0x00E8
	char pad_0200[8]; //0x0200
}; //Size: 0x0208
static_assert(sizeof(RETransform) == 0x208);

class N0000B6D9
{
public:
	class REManagedObject *object; //0x0000
	uint32_t v1; //0x0008
	uint32_t v2; //0x000C
	uint32_t v3; //0x0010
	uint32_t v4; //0x0014
}; //Size: 0x0018
static_assert(sizeof(N0000B6D9) == 0x18);

class REScene : public REManagedObject
{
public:
	char pad_0020[3]; //0x0020
	bool enabled; //0x0023
	bool monitor; //0x0024
	bool mainScene; //0x0025
	char pad_0026[6]; //0x0026
	uint32_t frameCount; //0x002C
	float timescale; //0x0030
	char pad_0034[4]; //0x0034
	class N0000B6D9 someHugeArray[65536]; //0x0038
	char pad_180038[1176]; //0x180038
	class RETransform *N0000B786; //0x1804D0
	class REFolder *firstFolder; //0x1804D8
	class REString name; //0x1804E0
	char pad_180500[720]; //0x180500
	int64_t N0000B7E3; //0x1807D0
	class REManagedObject *N0000B7E4; //0x1807D8
}; //Size: 0x1807E0
static_assert(sizeof(REScene) == 0x1807E0);

class N0000091E
{
public:
	class N0000092A *N00000920; //0x0000
	char pad_0008[56]; //0x0008
}; //Size: 0x0040
static_assert(sizeof(N0000091E) == 0x40);

class N0000092A
{
public:
	char pad_0000[72]; //0x0000
}; //Size: 0x0048
static_assert(sizeof(N0000092A) == 0x48);

class N00000965
{
public:
	class REObjectInfo *object; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048
static_assert(sizeof(N00000965) == 0x48);

class REObjectInfo
{
public:
	class REClassInfo *classInfo; //0x0000
	uint32_t N000047F0; //0x0008
	uint32_t size; //0x000C
	char pad_0010[16]; //0x0010
	class REObjectInfo *parent; //0x0020
	class REObjectInfo *next; //0x0028
	char pad_0030[16]; //0x0030
	void* methods; //0x0040
	void* fields; //0x0048
	void* staticFields; //0x0050
	void* N00004866; //0x0058
	class REType *type; //0x0060
	char pad_0068[8]; //0x0068
}; //Size: 0x0070
static_assert(sizeof(REObjectInfo) == 0x70);

class REClassInfo
{
public:
	char pad_0000[4]; //0x0000
	uint16_t parentIndex; //0x0004
	char pad_0006[12]; //0x0006
	uint16_t N0000480D; //0x0012
	uint32_t nameOffset; //0x0014
	uint32_t nameSpaceOffset; //0x0018
	uint32_t typeFlags; //0x001C System::Reflection::TypeAttributes or via::clr::TypeFlag
	uint16_t systemType; //0x0020
	uint8_t objectType; //0x0022 1 == normal type ? ??
	char pad_0023[5]; //0x0023
	uint16_t numMethods; //0x0028
	char pad_002A[2]; //0x002A
	uint16_t numProperties; //0x002C
	char pad_002E[6]; //0x002E
	uint32_t elementSize; //0x0034
	char pad_0038[52]; //0x0038
}; //Size: 0x006C
static_assert(sizeof(REClassInfo) == 0x6C);

class N00000CF1
{
public:
	class REObjectInfo *N00000CF2; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048
static_assert(sizeof(N00000CF1) == 0x48);

class RERenderOutput : public REComponent
{
public:
	char pad_0040[144]; //0x0040
}; //Size: 0x00D0
static_assert(sizeof(RERenderOutput) == 0xD0);

class N00000D1D
{
public:
	class REObjectInfo *object; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048
static_assert(sizeof(N00000D1D) == 0x48);

class REFolder : public REManagedObject
{
public:
	char pad_0020[8]; //0x0020
	int32_t N00000D4E; //0x0028
	char pad_002C[8]; //0x002C
	float N00005BA5; //0x0034
	class REString name; //0x0038
	class REString name2; //0x0058
	class REString name3; //0x0078
	class REFolder *parentFolder; //0x0098
	class REFolder *childFolder; //0x00A0
	class REFolder *childFolder2; //0x00A8
	char pad_00B0[40]; //0x00B0
	class REScene *scene; //0x00D8
}; //Size: 0x00E0
static_assert(sizeof(REFolder) == 0xE0);

class N00000D61
{
public:
	class REObjectInfo *N00000D62; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048
static_assert(sizeof(N00000D61) == 0x48);

class N00000DFF
{
public:
	class REObjectInfo *N00000E00; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048
static_assert(sizeof(N00000DFF) == 0x48);

class N00000E15
{
public:
	class REObjectInfo *N00000E16; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048
static_assert(sizeof(N00000E15) == 0x48);

class N00000E2B
{
public:
	class REObjectInfo *N00000E2C; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048
static_assert(sizeof(N00000E2B) == 0x48);

class N00004041
{
public:
	class REObjectInfo *N00004042; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048
static_assert(sizeof(N00004041) == 0x48);

class ASDF
{
public:
	class RETransform *N0000406D; //0x0000
	char pad_0008[80]; //0x0008
}; //Size: 0x0058
static_assert(sizeof(ASDF) == 0x58);

class SceneObjectList : public ASDF
{
public:
	char pad_0058[48]; //0x0058
}; //Size: 0x0088
static_assert(sizeof(SceneObjectList) == 0x88);

class N00004087
{
public:
	class REObjectInfo *N00004089; //0x0000
	char pad_0008[56]; //0x0008
}; //Size: 0x0040
static_assert(sizeof(N00004087) == 0x40);

class REToneMapping : public REComponent
{
public:
	void *N0000410F; //0x0040
	float N00004110; //0x0048
	bool enabled; //0x004C
	char pad_004D[3]; //0x004D
}; //Size: 0x0050
static_assert(sizeof(REToneMapping) == 0x50);

class REBehavior : public REComponent
{
public:
	uint8_t N000076CE; //0x0040
	bool N000017DF; //0x0041
	bool enabled; //0x0042
	uint8_t N00000836; //0x0043
	uint32_t N00007712; //0x0044
	uint32_t N000076CF; //0x0048
	uint32_t N0000705D; //0x004C update cost?
	char pad_0050[8]; //0x0050
}; //Size: 0x0058
static_assert(sizeof(REBehavior) == 0x58);

class RECameraParam : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	uint32_t N000076C0; //0x0060
	float fov; //0x0064 fov
	float param2; //0x0068
	float farClip; //0x006C far clip dist
	bool useParam; //0x0070
	char pad_0071[15]; //0x0071
}; //Size: 0x0080
static_assert(sizeof(RECameraParam) == 0x80);

class RopewayPlayerCameraController : public REBehavior
{
public:
	char pad_0058[24]; //0x0058
	Vector4f pivotPosition; //0x0070
	Vector4f pivotRotation; //0x0080
	Vector4f worldPosition; //0x0090
	Vector4f worldRotation; //0x00A0 quaternion
	char pad_00B0[8]; //0x00B0
	class RECamera *activeCamera; //0x00B8
	class REJoint *joint; //0x00C0
	class RECameraParam *cameraParam; //0x00C8
	class ValueTriggerBoolean *N0000772F; //0x00D0
	char pad_00D8[8]; //0x00D8
	class REBehavior *cascade; //0x00E0
	class RECameraParam *cameraParam2; //0x00E8
	char pad_00F0[8]; //0x00F0
	class DampingFloat *controlDamping; //0x00F8
	class DampingFloat *controlDamping2; //0x0100
	class TwirlerCameraSettings *cameraLimitSettings; //0x0108
	bool isNotUsingWeapon; //0x0110 IDK, but it gets set to true when not using a weap.
	char pad_0111[7]; //0x0111
	float pitch; //0x0118
	float yaw; //0x011C
	class DampingFloat *controlDamping3; //0x0120
	class DampingFloat *controlDamping4; //0x0128
	char pad_0130[24]; //0x0130
	class DampingFloat *controlDamping5; //0x0148
	uint32_t cameraMode; //0x0150 3 == in weapon?
	char pad_0154[4]; //0x0154
	class RopewayCameraInterpolationPrame *N0000773F; //0x0158
	char pad_0160[72]; //0x0160
	uint32_t N00007748; //0x01A8
	char pad_01AC[60]; //0x01AC
}; //Size: 0x01E8
static_assert(sizeof(RopewayPlayerCameraController) == 0x1E8);

class REJoint : public REManagedObject
{
public:
	class RETransform *parentTransform; //0x0020
	class REJointDesc *info; //0x0028
	Vector4f posOffset; //0x0030
	Vector3f anglesOffset; //0x0040
	float N000026BC; //0x004C
	float N000026B6; //0x0050
	float N000026BF; //0x0054
	float N000026B7; //0x0058
	char pad_005C[4]; //0x005C
	int32_t N00006E8E; //0x0060
	float N00006E97; //0x0064
	int32_t N00006E8F; //0x0068
	uint32_t N0000B861; //0x006C
}; //Size: 0x0070
static_assert(sizeof(REJoint) == 0x70);

class ValueTriggerBoolean : public REManagedObject
{
public:
	bool current; //0x0020
	bool old; //0x0021
	char pad_0022[2]; //0x0022
	uint32_t N0000785B; //0x0024
}; //Size: 0x0028
static_assert(sizeof(ValueTriggerBoolean) == 0x28);

class DampingFloat : public REManagedObject
{
public:
	float current; //0x0020
	float source; //0x0024
	float dampingTime; //0x0028
	float dampingRate; //0x002C
	char pad_0030[16]; //0x0030
	uint32_t N00007885; //0x0040
	float target; //0x0044
	float N00007886; //0x0048
	float N00007891; //0x004C
	float progressRate; //0x0050
}; //Size: 0x0054
static_assert(sizeof(DampingFloat) == 0x54);

class TwirlerCameraSettings : public REManagedObject
{
public:
	wchar_t *settingsPath; //0x0020
	char pad_0028[16]; //0x0028
	uint32_t N000078BE; //0x0038
	uint32_t N000078DE; //0x003C
	float N000078BF; //0x0040
	char pad_0044[4]; //0x0044
	class REAnimationCurve *animationCurve; //0x0048
	class REAnimationCurve *animationCurve2; //0x0050
	float N000078C2; //0x0058
	float N000078E4; //0x005C
	float N000078C3; //0x0060
	float N000078E7; //0x0064
	float cameraSensitivity; //0x0068
	char pad_006C[20]; //0x006C
	float sensitivityScale; //0x0080
	char pad_0084[4]; //0x0084
}; //Size: 0x0088
static_assert(sizeof(TwirlerCameraSettings) == 0x88);

class REAnimationCurve : public REManagedObject
{
public:
	uint32_t length; //0x0020
	float loopStartTime; //0x0024
	float loopEndTime; //0x0028
	float minValue; //0x002C
	float maxValue; //0x0030
	uint16_t loopWrapNo; //0x0034
	char pad_0036[2]; //0x0036
	bool enableClamp; //0x0038
	char pad_0039[3]; //0x0039
	float N00007918; //0x003C
	class CurveKeyFrames *keyframes; //0x0040
	class CurveKeyFrames *keyframes2; //0x0048
	char pad_0050[16]; //0x0050
}; //Size: 0x0060
static_assert(sizeof(REAnimationCurve) == 0x60);

class REActorMotion : public REComponent
{
public:
	class REMotion *motion; //0x0040
	char pad_0048[16]; //0x0048
	class N00007A09 *N00007950; //0x0058
	char pad_0060[32]; //0x0060
}; //Size: 0x0080
static_assert(sizeof(REActorMotion) == 0x80);

class REMotion : public REComponent
{
public:
	char pad_0040[120]; //0x0040
	class N000026F0 *N0000797C; //0x00B8
	char pad_00C0[48]; //0x00C0
	uint32_t N00007983; //0x00F0
	uint8_t N000079F6; //0x00F4
	char pad_00F5[115]; //0x00F5
	class N00007C3D *N00007992; //0x0168
	char pad_0170[32]; //0x0170
	class JointList *joints; //0x0190
	uint32_t numJoints; //0x0198
	char pad_019C[532]; //0x019C
}; //Size: 0x03B0
static_assert(sizeof(REMotion) == 0x3B0);

class N00007A09
{
public:
	class REActorLayer *N00007A0A; //0x0000
	char pad_0008[64]; //0x0008
}; //Size: 0x0048
static_assert(sizeof(N00007A09) == 0x48);

class REActorLayer : public REManagedObject
{
public:
	char pad_0020[56]; //0x0020
}; //Size: 0x0058
static_assert(sizeof(REActorLayer) == 0x58);

class N00007E99
{
public:
	Matrix4x4f N00007E9A; //0x0000
}; //Size: 0x0040
static_assert(sizeof(N00007E99) == 0x40);

class JointList
{
public:
	class N00007E99 joints[2048]; //0x0000
}; //Size: 0x20000
static_assert(sizeof(JointList) == 0x20000);

class N00007C3D
{
public:
	char pad_0000[32]; //0x0000
}; //Size: 0x0020
static_assert(sizeof(N00007C3D) == 0x20);

class N00007EEE
{
public:
	class N00003730 *N00007EEF; //0x0000
	char pad_0008[128]; //0x0008
}; //Size: 0x0088
static_assert(sizeof(N00007EEE) == 0x88);

class DotNetString_Implementation : public REManagedObject
{
public:
	class REManagedObject *N000036B9; //0x0020
	char pad_0028[8]; //0x0028
}; //Size: 0x0030
static_assert(sizeof(DotNetString_Implementation) == 0x30);

class DotNetGenericList : public REManagedObject
{
public:
	class REArrayBase *data; //0x0020
	char pad_0028[72]; //0x0028
}; //Size: 0x0070
static_assert(sizeof(DotNetGenericList) == 0x70);

class N00003730
{
public:
	char pad_0000[136]; //0x0000
}; //Size: 0x0088
static_assert(sizeof(N00003730) == 0x88);

class N00003745
{
public:
	class REJoint *joints[2048]; //0x0000
}; //Size: 0x4000
static_assert(sizeof(N00003745) == 0x4000);

class N0000379E
{
public:
	Matrix4x4f worldMatrix; //0x0000
}; //Size: 0x0040
static_assert(sizeof(N0000379E) == 0x40);

class JointMatrices
{
public:
	class N0000379E data[2048]; //0x0000
}; //Size: 0x20000
static_assert(sizeof(JointMatrices) == 0x20000);

class REJointDesc
{
public:
	wchar_t *name; //0x0000
	uint32_t nameHash; //0x0008
	int16_t parentJoint; //0x000C minus 1
	int16_t jointNumber; //0x000E
	Vector4f offset; //0x0010
	float N000037B4; //0x0020
	float N0000377B; //0x0024
	float N00003770; //0x0028
	float N0000377E; //0x002C
	float N00003771; //0x0030
	float N00003781; //0x0034
	float N00003772; //0x0038
	float N00003784; //0x003C
}; //Size: 0x0040
static_assert(sizeof(REJointDesc) == 0x40);

class PhysicsCollidableBase : public REComponent
{
public:
	char pad_0040[32]; //0x0040
}; //Size: 0x0060
static_assert(sizeof(PhysicsCollidableBase) == 0x60);

class PhysicsCharacterController : public PhysicsCollidableBase
{
public:
	uint32_t N00006EB8; //0x0060
	int32_t movementFlags; //0x0064
	float height; //0x0068
	float radius; //0x006C
	uint32_t N00006EBA; //0x0070
	uint32_t N00001828; //0x0074
	float N00006EBB; //0x0078
	float slopeLimit; //0x007C
	float volumeGrowth; //0x0080
	float movementThreshold; //0x0084
	float N00006EE9; //0x0088
	float slideMovementLimit; //0x008C
	char pad_0090[8]; //0x0090
	int32_t N00006EEB; //0x0098
	char pad_009C[4]; //0x009C
	Vector3f gravityDir; //0x00A0
	char pad_00AC[20]; //0x00AC
	uint16_t groupId; //0x00C0
	char pad_00C2[2]; //0x00C2
	bool localMode; //0x00C4
	char pad_00C5[1]; //0x00C5
	bool ignoreRotation; //0x00C6
	bool ignoreParentRotation; //0x00C7
	char pad_00C8[136]; //0x00C8
	Vector3f position; //0x0150
	char pad_015C[156]; //0x015C
	class PhysicsCollidable *collidable; //0x01F8
	class PhysicsFilterInfo *filterInfo; //0x0200
	char pad_0208[56]; //0x0208
}; //Size: 0x0240
static_assert(sizeof(PhysicsCharacterController) == 0x240);

class RopewayCameraSystem : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	float motionCameraSpeedScale; //0x0060
	char pad_0064[1]; //0x0064
	uint8_t N000009D7; //0x0065
	char pad_0066[2]; //0x0066
	class DotNetGenericList *cameraControllerInfos; //0x0068
	class RopewayCameraInterpolateSettings *cameraInterpSettings; //0x0070
	float rayCastStartOffset; //0x0078
	float maxViewShieldLength; //0x007C
	class CollisionSystemAsyncCastRayHandle *castHandleTerrain; //0x0080
	class CollisionSystemAsyncCastSphereHandle *castHandleCharacter; //0x0088
	class CollisionSystemAsyncCastRayHandle *castHandleAim; //0x0090
	class REGameObject *cameraGameObject; //0x0098
	char pad_00A0[8]; //0x00A0
	class RopewayPlayerCameraController *cameraController; //0x00A8
	class RopewayPlayerCameraController *previousController; //0x00B0
	class REManagedObject *N00006F3D; //0x00B8
	class DampingFloat *damping; //0x00C0
	class ValueTriggerBoolean *isExistStickInput; //0x00C8
	class RECamera *mainCamera; //0x00D0
	class DotNetGenericList *fixCameraIdentifiers; //0x00D8
	class DotNetGenericList *cameraGateInfoContainers; //0x00E0
	class RERenderCaptureToTexture *N00006F43; //0x00E8
	class REJoint *playerJoint; //0x00F0
	class RopewayMainCameraController *mainCameraController; //0x00F8
	bool isUseWideMonitor; //0x0100
	char pad_0101[7]; //0x0101
	class REManagedObject *N00003EEC; //0x0108
	bool N00003EED; //0x0110
	char pad_0111[39]; //0x0111
	class DotNetGenericList *stringList; //0x0138
	char pad_0140[8]; //0x0140
}; //Size: 0x0148
static_assert(sizeof(RopewayCameraSystem) == 0x148);

class N000070F5
{
public:
	Matrix3x4f localMatrix; //0x0000
}; //Size: 0x0030
static_assert(sizeof(N000070F5) == 0x30);

class RopewayIkController : public REBehavior
{
public:
	char pad_0058[12]; //0x0058
	uint8_t updateTiming; //0x0064
	char pad_0065[3]; //0x0065
	uint8_t enableIkBits; //0x0068
	char pad_0069[3]; //0x0069
	int8_t defaultSkipIkBits; //0x006C
	char pad_006D[3]; //0x006D
	class REArrayThing *N000071C9; //0x0070
	class REArrayThing *N000071CA; //0x0078
	int32_t ikLegKind; //0x0080
	float fooatAlignBorderAngle; //0x0084
	class SystemString *someString; //0x0088
	bool useSkipIkForLeg; //0x0090
	char pad_0091[3]; //0x0091
	int32_t skipIkForLegBits; //0x0094
	bool useFootLockForLeg; //0x0098
	bool unlockFootOnAdjustTerrain; //0x0099
	bool unlockFootOnPressing; //0x009A
	bool unlockFootOnMotionInterpolating; //0x009B
	bool unlockFootOnPreventeringPenetrate; //0x009C
	char pad_009D[3]; //0x009D
	int16_t monitoringMotionLayerNoForLeg; //0x00A0
	char pad_00A2[2]; //0x00A2
	int32_t spineKind; //0x00A4
	char pad_00A8[8]; //0x00A8
	class SystemString *someString2; //0x00B0
	char pad_00B8[40]; //0x00B8
	class SystemString *someString3; //0x00E0
	float armDampingRate; //0x00E8
	float armDampingTime; //0x00EC
	float defaultArmActivateTime; //0x00F0
	float defaultArmResetTime; //0x00F4
	float armRayRadius; //0x00F8
	float armRayIntervalFrame; //0x00FC
	int32_t wristKind; //0x0100
	char pad_0104[4]; //0x0104
	class N0000A9C1 *armFitIkUserData; //0x0108
	char pad_0110[8]; //0x0110
	int32_t ikWristSolveMode; //0x0118
	int32_t liftUpWristOnGround; //0x011C
	bool useSkipIkForWrist; //0x0120
	char pad_0121[3]; //0x0121
	int32_t skipIkForWristBits; //0x0124
	float skipIkDampingRateForWrist; //0x0128
	bool useFootLockForWrist; //0x012C
	char pad_012D[3]; //0x012D
	int32_t footLockOptionBitsForWrist; //0x0130
	int16_t monitoringMotionLayerNoForWrist; //0x0134
	char pad_0136[2]; //0x0136
	bool setupped; //0x0138
	bool setuppedHumanRetargetIk; //0x0139
	char pad_013A[2]; //0x013A
	int32_t legStepStatus; //0x013C
	bool alignedFoot; //0x0140
	char pad_0141[3]; //0x0141
	float alignedFootAngle; //0x0144
	char pad_0148[4]; //0x0148
	bool alignedForeFoot; //0x014C
	char pad_014D[3]; //0x014D
	float N0000A953; //0x0150
	int32_t appliedSkipIkForLegBits; //0x0154
	int32_t appliedFootLockForLegBits; //0x0158
	char pad_015C[4]; //0x015C
	void *lookAtTarget; //0x0160
	bool autoLookAtEnable; //0x0168
	char pad_0169[15]; //0x0169
	class REArrayThing *N0000A958; //0x0178
	int32_t appliedSkipIkForWristBits; //0x0180
	int32_t appliedFootLockForWristBits; //0x0184
	class IkControlStatusArray *controlStatuses; //0x0188
	char pad_0190[16]; //0x0190
	class REManagedObject *N0000A95D; //0x01A0
	char pad_01A8[24]; //0x01A8
	class REManagedObject *N0000A961; //0x01C0
	class REManagedObject *N0000A962; //0x01C8
	char pad_01D0[8]; //0x01D0
	class ObjectPointer *jointPtr; //0x01D8
	char pad_01E0[216]; //0x01E0
}; //Size: 0x02B8
static_assert(sizeof(RopewayIkController) == 0x2B8);

class UserData : public REManagedObject
{
public:
	class REString name; //0x0020
}; //Size: 0x0040
static_assert(sizeof(UserData) == 0x40);

class N0000A9C1 : public UserData
{
public:
	class REManagedObject *N0000A9C3; //0x0040
}; //Size: 0x0048
static_assert(sizeof(N0000A9C1) == 0x48);

class SystemString : public REManagedObject
{
public:
	int32_t size; //0x0020
	wchar_t data[256]; //0x0024
}; //Size: 0x0224
static_assert(sizeof(SystemString) == 0x224);

class N0000AA93 : public REManagedObject
{
public:
	class REClassInfo *N0000AA95; //0x0020
	char pad_0028[112]; //0x0028
}; //Size: 0x0098
static_assert(sizeof(N0000AA93) == 0x98);

class N0000AAAC : public REManagedObject
{
public:
	char pad_0020[48]; //0x0020
}; //Size: 0x0050
static_assert(sizeof(N0000AAAC) == 0x50);

class ObjectPointer : public REManagedObject
{
public:
	class REClassInfo *classInfo; //0x0020
	uint32_t num1; //0x0028
	uint32_t num2; //0x002C
	class REManagedObject *object; //0x0030
	char pad_0038[112]; //0x0038
}; //Size: 0x00A8
static_assert(sizeof(ObjectPointer) == 0xA8);

class REVariableList
{
public:
	class N0000ADA4 *data; //0x0000
	int32_t num; //0x0008
	int32_t maxItems; //0x000C
}; //Size: 0x0010
static_assert(sizeof(REVariableList) == 0x10);

class N0000ADA4
{
public:
	class VariableDescriptor *descriptors[256]; //0x0000
}; //Size: 0x0800
static_assert(sizeof(N0000ADA4) == 0x800);

class VariableDescriptor
{
public:
	char *name; //0x0000
	uint32_t nameHash; //0x0008
	uint16_t flags1; //0x000C
	uint16_t N00000871; //0x000E
	uint32_t typeKind; //0x0010 (flags AND 0x1F) gives var type (via::clr::reflection::TypeKind)
	uint32_t typeQual; //0x0014
	uint32_t typeAttr; //0x0018
	bool isManagedStr; //0x001C
	char pad_001D[3]; //0x001D
	char *baseTypeName; //0x0020
	char *passTypeName; //0x0028
	char *typeName; //0x0030
	char *fullTypeName; //0x0038
	uint32_t size; //0x0040
	char pad_0044[4]; //0x0044
	uint32_t typeFqn; //0x0048
	uint32_t variableType; //0x004C 1 == pointer? 3 == builtin?
	char pad_0050[8]; //0x0050
	class StaticVariableDescriptor *staticVariableData; //0x0058
	void* function; //0x0060
}; //Size: 0x0068
static_assert(sizeof(VariableDescriptor) == 0x68);

class N0000B627
{
public:
	char pad_0000[8]; //0x0000
	class N0000B632 *N0000B629; //0x0008
	char pad_0010[56]; //0x0010
}; //Size: 0x0048
static_assert(sizeof(N0000B627) == 0x48);

class N0000B632
{
public:
	char pad_0000[136]; //0x0000
}; //Size: 0x0088
static_assert(sizeof(N0000B632) == 0x88);

class REMotionStructure : public REComponent
{
public:
}; //Size: 0x0040
static_assert(sizeof(REMotionStructure) == 0x40);

class SkeletonResourceHandle
{
public:
	class N0000B89B *N0000B899; //0x0000
}; //Size: 0x0008
static_assert(sizeof(SkeletonResourceHandle) == 0x8);

class JointDescDTbl
{
public:
	class JointDescData *data; //0x0000
	uint32_t num; //0x0008
	char pad_000C[4]; //0x000C
}; //Size: 0x0010
static_assert(sizeof(JointDescDTbl) == 0x10);

class REMotionDummySkeleton : public REMotionStructure
{
public:
	class SkeletonResourceHandle skeletonResourceHandle; //0x0040
	class JointDescDTbl jointDescTbl; //0x0048
	char pad_0058[8]; //0x0058
}; //Size: 0x0060
static_assert(sizeof(REMotionDummySkeleton) == 0x60);

class N0000B89B
{
public:
	wchar_t name[64]; //0x0008
	
	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0088
static_assert(sizeof(N0000B89B) == 0x88);

class JointDescData
{
public:
	class REJointDesc data[256]; //0x0000
}; //Size: 0x4000
static_assert(sizeof(JointDescData) == 0x4000);

class StaticVariableDescriptor
{
public:
	uint16_t ownerTypeIndex; //0x0000
	char pad_0002[6]; //0x0002
	uint32_t variableIndex; //0x0008 index into some global array...?
	uint16_t N00000839; //0x000C
	int16_t N000009F5; //0x000E
	uint32_t staticVariableOffset; //0x0010 of
	char pad_0014[1]; //0x0014
}; //Size: 0x0015
static_assert(sizeof(StaticVariableDescriptor) == 0x15);

class REAnimation : public REComponent
{
public:
	char pad_0040[28]; //0x0040
	float N0000BA25; //0x005C
	float N0000B970; //0x0060
	float N0000BA28; //0x0064
	char pad_0068[32]; //0x0068
}; //Size: 0x0088
static_assert(sizeof(REAnimation) == 0x88);

class REMotionCamera : public REAnimation
{
public:
	char pad_0088[872]; //0x0088
	Vector4f position; //0x03F0
	Vector4f orientation; //0x0400
	char pad_0410[68]; //0x0410
}; //Size: 0x0454
static_assert(sizeof(REMotionCamera) == 0x454);

class RopewayMainCameraController : public REBehavior
{
public:
	char pad_0058[9]; //0x0058
	bool updateCamera; //0x0061
	char pad_0062[6]; //0x0062
	class RopewayCameraStatus *cameraStatus; //0x0068
	Vector4f cameraObjectPosition; //0x0070
	Vector4f cameraObjectRotation; //0x0080
	Vector4f cameraPosition; //0x0090
	Vector4f cameraRotation; //0x00A0
	char pad_00B0[4]; //0x00B0
	float fov; //0x00B4
	bool controllerEnabled; //0x00B8
	char pad_00B9[3]; //0x00B9
	float switchBusyTime; //0x00BC
	float switchInterpolationTime; //0x00C0
	char pad_00C4[4]; //0x00C4
	class REAnimationCurve *N00000817; //0x00C8
	class DotNetGenericList *cameraShakes; //0x00D0
	class REGameObject *mainCameraObject; //0x00D8
	class RECamera *mainCamera; //0x00E0
	class REJoint *N0000081B; //0x00E8
	class AppliedCameraShakeParam *appliedCameraShakeParam; //0x00F0
	char pad_00F8[8]; //0x00F8
}; //Size: 0x0100
static_assert(sizeof(RopewayMainCameraController) == 0x100);

class N00000878
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008
static_assert(sizeof(N00000878) == 0x8);

class N0000087A : public N00000878
{
public:
}; //Size: 0x0008
static_assert(sizeof(N0000087A) == 0x8);

class N000008E5
{
public:
	char pad_0000[328]; //0x0000
}; //Size: 0x0148
static_assert(sizeof(N000008E5) == 0x148);

class AppliedCameraShakeParam : public REManagedObject
{
public:
	char pad_0020[48]; //0x0020
}; //Size: 0x0050
static_assert(sizeof(AppliedCameraShakeParam) == 0x50);

class FieldInfoPtr
{
public:
	class FieldInfoArray *N00000A1A; //0x0000
}; //Size: 0x0008
static_assert(sizeof(FieldInfoPtr) == 0x8);

class FieldInfo
{
public:
	uint16_t ownerType; //0x0000
	int16_t indexIntoSomeOtherArray; //0x0002
	uint16_t N0000133D; //0x0004
	uint16_t N00001380; //0x0006
	char pad_0008[8]; //0x0008
	uint8_t N0000135D; //0x0010
	char pad_0011[7]; //0x0011
	void* get; //0x0018
}; //Size: 0x0020
static_assert(sizeof(FieldInfo) == 0x20);

class FieldInfoArray
{
public:
	class FieldInfo N00000A1D[2000000]; //0x0000
}; //Size: 0x3D09000
static_assert(sizeof(FieldInfoArray) == 0x3D09000);

class TypeListArrayPtr
{
public:
	class TypeListArray *N00000A47; //0x0000
}; //Size: 0x0008
static_assert(sizeof(TypeListArrayPtr) == 0x8);

class TypeListArray
{
public:
	class REClassInfo N00000A51[100000]; //0x0000
}; //Size: 0xA4CB80
static_assert(sizeof(TypeListArray) == 0xA4CB80);

class GlobalArrayData2
{
public:
	char pad_0000[104]; //0x0000
	class N00000A8A *N00000A6A; //0x0068
	class REObjectInfo *objectInfo; //0x0070
}; //Size: 0x0078
static_assert(sizeof(GlobalArrayData2) == 0x78);

class N00000A8A
{
public:
	char pad_0000[72]; //0x0000
}; //Size: 0x0048
static_assert(sizeof(N00000A8A) == 0x48);

class SomeGlobalArrayThingPtr
{
public:
	class N00000AA4 *N00000A9B; //0x0000
}; //Size: 0x0008
static_assert(sizeof(SomeGlobalArrayThingPtr) == 0x8);

class N00000CB2
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008
static_assert(sizeof(N00000CB2) == 0x8);

class N00001242
{
public:
	char pad_0000[56]; //0x0000
}; //Size: 0x0038
static_assert(sizeof(N00001242) == 0x38);

class ContainerThing
{
public:
	class N00001283 *data; //0x0000
	uint32_t size; //0x0008
	char pad_000C[4]; //0x000C
}; //Size: 0x0010
static_assert(sizeof(ContainerThing) == 0x10);

class N00000AA4
{
public:
	class N00000CB2 N00000AA7[127]; //0x0008
	char pad_0400[280]; //0x0400
	class N00001242 N00000ACB[256]; //0x0518
	char pad_3D18[88]; //0x3D18
	class ContainerThing staticVariableLists[6]; //0x3D70
	char pad_3DD0[15008]; //0x3DD0
	
	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x7870
static_assert(sizeof(N00000AA4) == 0x7870);

class N00001283
{
public:
	class StaticVariables *N00001284[100000]; //0x0000
}; //Size: 0xC3500
static_assert(sizeof(N00001283) == 0xC3500);

class StaticVariables
{
public:
	char pad_0000[72]; //0x0000
}; //Size: 0x0048
static_assert(sizeof(StaticVariables) == 0x48);

class StaticVariables_RopewayCameraSystem
{
public:
	int32_t N000012C8; //0x0000
	int32_t N000012D1; //0x0004
	float N000012C9; //0x0008
	float N000012D4; //0x000C
	float N000012CA; //0x0010
	float N000012D7; //0x0014
	float N000012CB; //0x0018
	char pad_001C[2148]; //0x001C
}; //Size: 0x0880
static_assert(sizeof(StaticVariables_RopewayCameraSystem) == 0x880);

class RERenderLayer : public REManagedObject
{
public:
	char pad_0020[104]; //0x0020
}; //Size: 0x0088
static_assert(sizeof(RERenderLayer) == 0x88);

class RenderBounds
{
public:
	Vector2f top; //0x0000
	Vector2f bottom; //0x0008
}; //Size: 0x0010
static_assert(sizeof(RenderBounds) == 0x10);

class RERenderLayerScene : public RERenderLayer
{
public:
	class RECamera *camera; //0x0088
	char pad_0090[8]; //0x0090
	class RenderTargetState *targetStates[16]; //0x0098
	char pad_0118[4544]; //0x0118
	class RenderBounds renderBounds[3]; //0x12D8
	char pad_1308[224]; //0x1308
}; //Size: 0x13E8
static_assert(sizeof(RERenderLayerScene) == 0x13E8);

class RenderTargetState
{
public:
	char pad_0008[56]; //0x0008
	
	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
}; //Size: 0x0040
static_assert(sizeof(RenderTargetState) == 0x40);

class N000026F0
{
public:
	char pad_0000[76]; //0x0000
	float N0000270E; //0x004C
	class REJoint *joint; //0x0050
	char pad_0058[48]; //0x0058
}; //Size: 0x0088
static_assert(sizeof(N000026F0) == 0x88);

class RopewaySystemRingBufferController : public REBehavior
{
public:
	char pad_0058[128]; //0x0058
}; //Size: 0x00D8
static_assert(sizeof(RopewaySystemRingBufferController) == 0xD8);

class RopewayIlluminationManagerPtr
{
public:
	class RopewayIlluminationManager *N000013CC; //0x0000
}; //Size: 0x0008
static_assert(sizeof(RopewayIlluminationManagerPtr) == 0x8);

class RopewayIlluminationManager : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	class REManagedObject *N000013E2; //0x0060
	class DotNetGenericDictionary *mapIdsToIlluminationContainer; //0x0068
	uint32_t shouldUseFlashlight; //0x0070
	uint32_t someCounter; //0x0074
	bool shouldUseFlashlight2; //0x0078
	char pad_0079[7]; //0x0079
	class REManagedObject *N000013FB; //0x0080
	class DotNetGenericList *N000013F4; //0x0088
}; //Size: 0x0090
static_assert(sizeof(RopewayIlluminationManager) == 0x90);

class RopewayStayAreaController : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	uint32_t N00001410; //0x0060
	uint32_t N00001444; //0x0064
	uint32_t areaId; //0x0068
	uint32_t N0000143A; //0x006C
	uint32_t N00001412; //0x0070
	uint32_t N00001446; //0x0074
	uint32_t previousAreaId; //0x0078
	uint32_t N0000143D; //0x007C
	uint32_t areaId3; //0x0080
	uint32_t N00001441; //0x0084
	uint32_t areaId4; //0x0088
	char pad_008C[116]; //0x008C
}; //Size: 0x0100
static_assert(sizeof(RopewayStayAreaController) == 0x100);

class RopewayCameraSystemPtr
{
public:
	class RopewayCameraSystem *N000013EC; //0x0000
}; //Size: 0x0008
static_assert(sizeof(RopewayCameraSystemPtr) == 0x8);

class CameraControllerList : public REManagedObject
{
public:
	char pad_0020[16]; //0x0020
	class RopewayCameraControllerInfo *N00001407[64]; //0x0030
}; //Size: 0x0230
static_assert(sizeof(CameraControllerList) == 0x230);

class RopewayCameraControllerInfo : public REManagedObject
{
public:
	char pad_0020[8]; //0x0020
	class REGameObject *controllerObject; //0x0028
	char pad_0030[8]; //0x0030
}; //Size: 0x0038
static_assert(sizeof(RopewayCameraControllerInfo) == 0x38);

class DotNetGenericDictionary : public REManagedObject
{
public:
	class N00001440 *N00001434; //0x0020
	class N0000144E *N00001435; //0x0028
	char pad_0030[16]; //0x0030
	class REManagedObject *equalityComparer; //0x0040
}; //Size: 0x0048
static_assert(sizeof(DotNetGenericDictionary) == 0x48);

class N00001440 : public REManagedObject
{
public:
	char pad_0020[64]; //0x0020
}; //Size: 0x0060
static_assert(sizeof(N00001440) == 0x60);

class N0000144E : public REManagedObject
{
public:
	char pad_0020[64]; //0x0020
}; //Size: 0x0060
static_assert(sizeof(N0000144E) == 0x60);

class RopewayCameraInterpolationPrame : public REManagedObject
{
public:
	class REGameObject *owner; //0x0020
	class RopewayCameraPositionParam *posParam1; //0x0028
	class RopewayCameraPositionParam *posParam2; //0x0030
	class DampingFloat *dampingFloat; //0x0038
}; //Size: 0x0040
static_assert(sizeof(RopewayCameraInterpolationPrame) == 0x40);

class RopewayCameraPositionParam : public REManagedObject
{
public:
	class REGameObject *attachedOwner; //0x0020
	class REJoint *attachedJoint; //0x0028
	class RopewayCameraTransitionParam *transitionParam; //0x0030
}; //Size: 0x0038
static_assert(sizeof(RopewayCameraPositionParam) == 0x38);

class RopewayCameraTransitionParam : public REManagedObject
{
public:
	class RopewayPlayerCameraParam *playerCameraParam; //0x0020
	char pad_0028[136]; //0x0028
}; //Size: 0x00B0
static_assert(sizeof(RopewayCameraTransitionParam) == 0xB0);

class RopewayPlayerCameraParam : public REManagedObject
{
public:
	class REAnimationCurve *curve1; //0x0020
	Vector2f vec; //0x0028
	class REAnimationCurve *curve2; //0x0030
	class REAnimationCurve *curve3; //0x0038
	class SystemString *name; //0x0040
	char pad_0048[104]; //0x0048
}; //Size: 0x00B0
static_assert(sizeof(RopewayPlayerCameraParam) == 0xB0);

class RopewaySetPostEffectParam : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	uint32_t N0000156E; //0x0060
	uint32_t N000015AE; //0x0064
	char pad_0068[24]; //0x0068
	class DotNetGenericDictionary *N00001572; //0x0080
	char pad_0088[56]; //0x0088
}; //Size: 0x00C0
static_assert(sizeof(RopewaySetPostEffectParam) == 0xC0);

class RopewayPostEffectController : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	class REAnimationCurve *curve1; //0x0060
	class REAnimationCurve *curve2; //0x0068
	class DotNetGenericList *N000015B6; //0x0070
	char pad_0078[24]; //0x0078
}; //Size: 0x0090
static_assert(sizeof(RopewayPostEffectController) == 0x90);

class RESecondaryAnimation : public REComponent
{
public:
	class REMotion *motion; //0x0040
	char pad_0048[4]; //0x0048
	int16_t priority; //0x004C
	char pad_004E[2]; //0x004E
	int32_t updateTiming; //0x0050
	bool enabled; //0x0054
	char pad_0055[3]; //0x0055
}; //Size: 0x0058
static_assert(sizeof(RESecondaryAnimation) == 0x58);

class ActorLayerList
{
public:
	class N00001630 *data; //0x0000
	uint32_t numLayers; //0x0008
	uint32_t numAllocated; //0x000C
}; //Size: 0x0010
static_assert(sizeof(ActorLayerList) == 0x10);

class REActorMotionCamera : public RESecondaryAnimation
{
public:
	class ActorLayerList layers; //0x0058
}; //Size: 0x0068
static_assert(sizeof(REActorMotionCamera) == 0x68);

class N00001630
{
public:
	class REActorLayer *layers[2048]; //0x0000
}; //Size: 0x4000
static_assert(sizeof(N00001630) == 0x4000);

class RopewaySweetLightController : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	uint32_t N00001470; //0x0060
	uint32_t N0000152A; //0x0064
	uint32_t N00001471; //0x0068
	uint32_t N0000152D; //0x006C
	class RERenderSpotLight *renderSpotLight; //0x0070
	class RERenderProjectionSpotlight *renderProjectionSpotLight; //0x0078
	class RopewaySpotLightParam *param1; //0x0080
	class RopewaySpotLightParam *param2; //0x0088
	char pad_0090[8]; //0x0090
}; //Size: 0x0098
static_assert(sizeof(RopewaySweetLightController) == 0x98);

class RERenderLight : public REComponent
{
public:
	Vector4f color; //0x0040
	char pad_0050[24]; //0x0050
	float brightness; //0x0068
	float bounceIntensity; //0x006C
	float tempature; //0x0070
	float minRoughness; //0x0074
	char pad_0078[4]; //0x0078
	uint32_t importantLevel; //0x007C
	char pad_0080[48]; //0x0080
	Vector3f activeColor; //0x00B0
	float N00001546; //0x00BC
	char pad_00C0[82]; //0x00C0
	bool forceShadowCacheEnable; //0x0112
	char pad_0113[1]; //0x0113
	bool blackBodyRadiation; //0x0114
	char pad_0115[107]; //0x0115
}; //Size: 0x0180
static_assert(sizeof(RERenderLight) == 0x180);

class RERenderSpotLight : public RERenderLight
{
public:
	char pad_0180[9]; //0x0180
	bool shadowEnable; //0x0189
	char pad_018A[22]; //0x018A
	int32_t shadowCastFlags; //0x01A0
	char pad_01A4[420]; //0x01A4
	float N0000150F; //0x0348
	float N00001597; //0x034C
	float radius; //0x0350
	float illuminanceThreshold; //0x0354
	float cone; //0x0358
	float N0000159D; //0x035C
	float N00001512; //0x0360
	float shadowNearPlane; //0x0364
	float detailShadow; //0x0368
	bool N00002304; //0x036C
	char pad_036D[3]; //0x036D
	int32_t N00001514; //0x0370
	char pad_0374[28]; //0x0374
}; //Size: 0x0390
static_assert(sizeof(RERenderSpotLight) == 0x390);

class RERenderProjectionSpotlight : public RERenderSpotLight
{
public:
	char pad_0390[16]; //0x0390
}; //Size: 0x03A0
static_assert(sizeof(RERenderProjectionSpotlight) == 0x3A0);

class RopewaySpotLightParam : public REManagedObject
{
public:
	char pad_0020[80]; //0x0020
	uint32_t N00002282; //0x0070
	char pad_0074[92]; //0x0074
	float N000022BD; //0x00D0
	float N000022DF; //0x00D4
	float N000022BE; //0x00D8
	float N000022E3; //0x00DC
	float N000022BF; //0x00E0
	float N000022E5; //0x00E4
	char pad_00E8[184]; //0x00E8
}; //Size: 0x01A0
static_assert(sizeof(RopewaySpotLightParam) == 0x1A0);

class RopewaySweetLightManager : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	class SweetLightContextContainer *contexts; //0x0060
	class RopewaySweetLightParam *param1; //0x0068
	class RopewaySweetLightParam *param2; //0x0070
	uint8_t N0000154E; //0x0078
	char pad_0079[7]; //0x0079
	class REManagedObject *N0000154F; //0x0080
}; //Size: 0x0088
static_assert(sizeof(RopewaySweetLightManager) == 0x88);

class RopewaySweetLightParam : public REManagedObject
{
public:
	class RopewaySpotLightParam *spotlight; //0x0020
}; //Size: 0x0028
static_assert(sizeof(RopewaySweetLightParam) == 0x28);

class RopewaySweetLightManagerContext : public REManagedObject
{
public:
	class RopewaySweetLightController *controller; //0x0020
	class RopewaySpotLightParam *param1; //0x0028
	class RopewaySpotLightParam *param2; //0x0030
	char pad_0038[8]; //0x0038
	class DotNetGenericList *N000015B1; //0x0040
	class RopewaySpotLightParam *param3; //0x0048
	char pad_0050[8]; //0x0050
}; //Size: 0x0058
static_assert(sizeof(RopewaySweetLightManagerContext) == 0x58);

class N00002B03
{
public:
	char pad_0000[192]; //0x0000
}; //Size: 0x00C0
static_assert(sizeof(N00002B03) == 0xC0);

class REArrayBase : public REManagedObject
{
public:
	class REObjectInfo *containedType; //0x0020
	int32_t num1; //0x0028
	int32_t numElements; //0x002C
}; //Size: 0x0030
static_assert(sizeof(REArrayBase) == 0x30);

class SweetLightContextContainer : public REArrayBase
{
public:
	class RopewaySweetLightManagerContext *data[2]; //0x0030
}; //Size: 0x0040
static_assert(sizeof(SweetLightContextContainer) == 0x40);

class REArrayThing : public REArrayBase
{
public:
	char pad_0030[72]; //0x0030
}; //Size: 0x0078
static_assert(sizeof(REArrayThing) == 0x78);

class RopewaySurvivorCharacterController : public REBehavior
{
public:
	char pad_0058[16]; //0x0058
	class REJoint *constJoint; //0x0068
	class DampingFloat *radius; //0x0070
	class DampingFloat *height; //0x0078
	class DampingVec3 *offset; //0x0080
	uint32_t offsetType; //0x0088
	char pad_008C[4]; //0x008C
	class DotNetGenericList *controllerRequests; //0x0090
	char pad_0098[8]; //0x0098
	class PhysicsCharacterController *physicsCharacterController; //0x00A0
	class PhysicsRequestSetCollider *physicsRequestSetCollider; //0x00A8
	class RopewaySurvivorCharacterControllerUserData *userData; //0x00B0
	float N00001647; //0x00B8
	char pad_00BC[4]; //0x00BC
	class PhysicsCollider *collider; //0x00C0
}; //Size: 0x00C8
static_assert(sizeof(RopewaySurvivorCharacterController) == 0xC8);

class DampingVec3 : public REManagedObject
{
public:
	Vector3f N000015BC; //0x0020
	char pad_002C[20]; //0x002C
	float N000015BF; //0x0040
	float N000015DB; //0x0044
	char pad_0048[16]; //0x0048
	uint32_t N000015C2; //0x0058
	char pad_005C[4]; //0x005C
	Vector3f target; //0x0060
	char pad_006C[4]; //0x006C
	float N000015C4; //0x0070
	float N000015EA; //0x0074
	char pad_0078[8]; //0x0078
	float N000015C8; //0x0080
	char pad_0084[4]; //0x0084
}; //Size: 0x0088
static_assert(sizeof(DampingVec3) == 0x88);

class PhysicsRequestSetCollider : public PhysicsCollidableBase
{
public:
	char pad_0060[56]; //0x0060
}; //Size: 0x0098
static_assert(sizeof(PhysicsRequestSetCollider) == 0x98);

class RopewaySurvivorCharacterControllerUserData : public UserData // what a NAME
{
public:
	class REPtrArray *data; //0x0040
	float N00001634; //0x0048
	float N0000165B; //0x004C
}; //Size: 0x0050
static_assert(sizeof(RopewaySurvivorCharacterControllerUserData) == 0x50);

class REPtrArray : public REArrayBase
{
public:
	class REManagedObject *data[2048]; //0x0030
}; //Size: 0x4030
static_assert(sizeof(REPtrArray) == 0x4030);

class SurvivorCharacterControllerUserDataParam : public REManagedObject
{
public:
	char pad_0020[8]; //0x0020
	class SystemString *string1; //0x0028
	char pad_0030[8]; //0x0030
	class SystemString *string2; //0x0038
	class SurvivorControllerUserDataShape *shape; //0x0040
}; //Size: 0x0048
static_assert(sizeof(SurvivorCharacterControllerUserDataParam) == 0x48);

class SurvivorControllerUserDataShape : public REManagedObject
{
public:
	class SystemString *jointName; //0x0020
	uint32_t N000016B6; //0x0028
	char pad_002C[20]; //0x002C
	float f1; //0x0040
	float f2; //0x0044
	uint32_t N000016BA; //0x0048
	char pad_004C[4]; //0x004C
}; //Size: 0x0050
static_assert(sizeof(SurvivorControllerUserDataShape) == 0x50);

class PhysicsColliderVector
{
public:
	class N000017C9 *data; //0x0000
	uint32_t numElements; //0x0008
	uint32_t numAllocated; //0x000C
}; //Size: 0x0010
static_assert(sizeof(PhysicsColliderVector) == 0x10);

class PhysicsCollidable : public REManagedObject
{
public:
	uint32_t N000016F4; //0x0020
	char pad_0024[4]; //0x0024
	class PhysicsCapsuleShape *shape1; //0x0028
	class PhysicsCapsuleShape *shape2; //0x0030
	char pad_0038[8]; //0x0038
	class PhysicsFilterInfo *filterInfo; //0x0040
	char pad_0048[8]; //0x0048
	class REGameObject *owner; //0x0050
	uint32_t N000016FB; //0x0058
	uint32_t N000017B7; //0x005C
	uint32_t N000016FC; //0x0060
	char pad_0064[4]; //0x0064
	class PhysicsColliderVector colliderControllers; //0x0068 interesting
	char pad_0078[16]; //0x0078
}; //Size: 0x0088
static_assert(sizeof(PhysicsCollidable) == 0x88);

class PhysicsCollider : public PhysicsCollidable
{
public:
	char pad_0088[288]; //0x0088
}; //Size: 0x01A8
static_assert(sizeof(PhysicsCollider) == 0x1A8);

class PhysicsShape : public REManagedObject
{
public:
	char pad_0020[24]; //0x0020
	class PhysicsCollider *parentCollider; //0x0038
	char pad_0040[16]; //0x0040
	Vector4f vec1; //0x0050
	Vector4f vec2; //0x0060
}; //Size: 0x0070
static_assert(sizeof(PhysicsShape) == 0x70);

class PhysicsConvexShape : public PhysicsShape
{
public:
}; //Size: 0x0070
static_assert(sizeof(PhysicsConvexShape) == 0x70);

class PhysicsCapsuleShape : public PhysicsConvexShape
{
public:
	Vector4f vec3; //0x0070
	Vector4f vec4; //0x0080
	float radius; //0x0090
	float N0000176C; //0x0094
	float N00001734; //0x0098
	char pad_009C[4]; //0x009C
}; //Size: 0x00A0
static_assert(sizeof(PhysicsCapsuleShape) == 0xA0);

class PhysicsFilterInfo : public REManagedObject
{
public:
	uint32_t layer; //0x0020
	uint32_t group; //0x0024
	uint32_t subGroup; //0x0028
	uint32_t ignoreSubGroup; //0x002C
	int32_t maskBits; //0x0030
	char pad_0034[12]; //0x0034
}; //Size: 0x0040
static_assert(sizeof(PhysicsFilterInfo) == 0x40);

class N000017C9
{
public:
	class REBehavior *element[2048]; //0x0000
}; //Size: 0x4000
static_assert(sizeof(N000017C9) == 0x4000);

class RopewaySurvivorTargetBankController : public REBehavior
{
public:
	char pad_0058[16]; //0x0058
	class REMotion *motion; //0x0068
	char pad_0070[32]; //0x0070
	class RopewaySurvivorPlayerCondition *playerCondition; //0x0090
}; //Size: 0x0098
static_assert(sizeof(RopewaySurvivorTargetBankController) == 0x98);

class RopewaySurvivorPlayerCondition : public REBehavior
{
public:
	char pad_0058[12]; //0x0058
	int32_t survivorType; //0x0064
	bool ignoreBlow; //0x0068
	bool ignoreGrapple; //0x0069
	char pad_006A[6]; //0x006A
	class RopewaySurvivorDefineDamageParam *damageParam; //0x0070
	bool isEvent; //0x0078
	bool isLight; //0x0079
	bool isCombat; //0x007A
	bool isTension; //0x007B
	bool isTense; //0x007C
	bool useTranceiver; //0x007D
	bool forceUseFlashlight; //0x007E
	bool manuallyLight; //0x007F
	float autoHealStartTimer; //0x0080
	float autoHealTimer; //0x0084
	float poisonTimer; //0x0088
	float poisonAutoRecoveryTimer; //0x008C
	float combatTimer; //0x0090
	float coughTimer; //0x0094
	float warmTimer; //0x0098
	float unknownfloat; //0x009C
	class RopewayTimer *lightSwitchTimer; //0x00A0
	class RopewayTimer *burnTimer; //0x00A8
	class SurvivorConditionTimerTrigger *wetTimerTrigger; //0x00B0
	class SurvivorConditionTimerTrigger *dryTimerTrigger; //0x00B8
	class REGameObject *flashlight; //0x00C0
	char pad_00C8[40]; //0x00C8
	bool exceptional; //0x00F0
	char pad_00F1[3]; //0x00F1
	int32_t wallMaterial; //0x00F4
	class REJoint *playerJoint; //0x00F8
	char pad_0100[8]; //0x0100
	class SystemAction *actionVital; //0x0108
	class RopewaySurvivorPlayerController *playerController; //0x0110
	class RopewaySurvivorPlayerActionOrderer *actionOrderer; //0x0118
	char pad_0120[16]; //0x0120
	class RopewaySurvivorInventory *inventory; //0x0130
	class RopewaySurvivorEquipment *equipment; //0x0138
	class REMotion *playerMotion; //0x0140
	char pad_0148[136]; //0x0148
	class ActionTriggerInt *hitPointVitalTrigger; //0x01D0
	class ActionTriggerInt *situationTrigger; //0x01D8
	bool onFlashlight; //0x01E0
	bool N00005FF6; //0x01E1
	char pad_01E2[134]; //0x01E2
	bool isPoison; //0x0268
	char pad_0269[3]; //0x0269
	float dopingTimer; //0x026C
	char pad_0270[64]; //0x0270
}; //Size: 0x02B0
static_assert(sizeof(RopewaySurvivorPlayerCondition) == 0x2B0);

class RopewayHandHeldItem : public REBehavior
{
public:
	char pad_0058[64]; //0x0058
}; //Size: 0x0098
static_assert(sizeof(RopewayHandHeldItem) == 0x98);

class RopewayFlashLight : public RopewayHandHeldItem
{
public:
	char pad_0098[168]; //0x0098
	Vector4f targetPosition; //0x0140
	char pad_0150[60]; //0x0150
}; //Size: 0x018C
static_assert(sizeof(RopewayFlashLight) == 0x18C);

class RopewayTimerBase : public REManagedObject
{
public:
	int32_t mode; //0x0020
	float timeLimit; //0x0024
}; //Size: 0x0028
static_assert(sizeof(RopewayTimerBase) == 0x28);

class RopewayTimer : public RopewayTimerBase
{
public:
	bool completeTrigger; //0x0028
	char pad_0029[3]; //0x0029
	int32_t functionType; //0x002C
	float transitTime; //0x0030
	bool completed; //0x0034
	char pad_0035[3]; //0x0035
	int16_t completedCount; //0x0038
	char pad_003A[2]; //0x003A
}; //Size: 0x003C
static_assert(sizeof(RopewayTimer) == 0x3C);

class RopewaySurvivorInventory : public REBehavior
{
public:
	char pad_0058[64]; //0x0058
	class RopewaySurvivorPlayerCondition *parentCondition; //0x0098
	char pad_00A0[56]; //0x00A0
}; //Size: 0x00D8
static_assert(sizeof(RopewaySurvivorInventory) == 0xD8);

class RopewaySurvivorEquipment : public REBehavior
{
public:
	int32_t equipPartsForm; //0x0058
	char pad_005C[8]; //0x005C
	int32_t equipType; //0x0064
	int32_t forceEquipType; //0x0068
	char pad_006C[4]; //0x006C
	class RopewayImplementArm *mainWeapon; //0x0070
	class RopewayImplementArm *subWeapon; //0x0078
	class RopewayImplementGun *equippedWeapon; //0x0080
	class RopewayArmList *arms; //0x0088
	int32_t rapidFireNumber; //0x0090
	char pad_0094[12]; //0x0094
	class REManagedObject *valTrigger; //0x00A0
	char pad_00A8[104]; //0x00A8
	class RopewaySurvivorPlayerCondition *parentCondition; //0x0110
	char pad_0118[24]; //0x0118
	float currentAccuracy; //0x0130 ReticleFitPoint
	bool isPerfectAccuracy; //0x0134 IsReticleFit
	char pad_0135[3]; //0x0135
}; //Size: 0x0138
static_assert(sizeof(RopewaySurvivorEquipment) == 0x138);

class RopewayArmList : public REManagedObject
{
public:
	class RopewayArmList_Impl *data; //0x0020
}; //Size: 0x0028
static_assert(sizeof(RopewayArmList) == 0x28);

class RopewayArmList_Impl : public REArrayBase
{
public:
	class RopewayImplementArm *arms[2048]; //0x0030
}; //Size: 0x4030
static_assert(sizeof(RopewayArmList_Impl) == 0x4030);

class RopewayImplement : public REBehavior
{
public:
	char pad_0058[56]; //0x0058
	class REJoint *joint; //0x0090
	class RopewayImplementVirtualJoint *virtualJoint; //0x0098
	class RERenderMesh *mesh; //0x00A0
	class REMotion *implementMotion; //0x00A8
	class REMotion *parentMotion; //0x00B0
	class RopewayStayAreaController *stayAreaController; //0x00B8
	class RopewayIkController *ikController; //0x00C0
	class RopewayCharacterHandler *characterHandler; //0x00C8
	class RopewayMotionEventHandler *implementMotionHandler; //0x00D0
	class RopewayMotionEventHandler *parentMotionHandler; //0x00D8
	class RopewayWwiseContainerApp *wwiseContainerApp; //0x00E0
	char pad_00E8[8]; //0x00E8
	class RopewaySurvivorEquipment *parentEquipment; //0x00F0
	class UserData *implementUserData; //0x00F8
}; //Size: 0x0100
static_assert(sizeof(RopewayImplement) == 0x100);

class RopewayImplementArm : public RopewayImplement
{
public:
	char pad_0100[88]; //0x0100
}; //Size: 0x0158
static_assert(sizeof(RopewayImplementArm) == 0x158);

class RopewayCharacterHandler : public REBehavior
{
public:
	char pad_0058[184]; //0x0058
	class DotNetGenericDictionary *N00001A9D; //0x0110
	class DotNetGenericDictionary *N00001A9E; //0x0118
	class DotNetGenericDictionary *N00001A9F; //0x0120
	class DotNetGenericDictionary *N00001AA0; //0x0128
	char pad_0130[16]; //0x0130
	class PhysicsRequestSetCollider *requestSetCollider; //0x0140
	class RopewayIkController *ikController; //0x0148
	class RopewayPressController *pressController; //0x0150
	class RopewayGroundFixer *groundFixer; //0x0158
	class RopewayPlRainEffect *rainEffect; //0x0160
	char pad_0168[8]; //0x0168
	class REDynamicsRagdoll *ragdoll; //0x0170
	char pad_0178[24]; //0x0178
}; //Size: 0x0190
static_assert(sizeof(RopewayCharacterHandler) == 0x190);

class RopewayPressController : public REBehavior
{
public:
	char pad_0058[88]; //0x0058
}; //Size: 0x00B0
static_assert(sizeof(RopewayPressController) == 0xB0);

class RopewayGroundFixer : public REBehavior
{
public:
	char pad_0058[280]; //0x0058
}; //Size: 0x0170
static_assert(sizeof(RopewayGroundFixer) == 0x170);

class RopewayPlRainEffect : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	uint8_t N00001B98; //0x0060
	bool isInRain; //0x0061
	char pad_0062[2]; //0x0062
	float N00001BC7; //0x0064
	float N00001B99; //0x0068
	float N00001BCA; //0x006C
	float wetAmount; //0x0070
	float N00001BC3; //0x0074
	char pad_0078[48]; //0x0078
	uint32_t wetState; //0x00A8
	char pad_00AC[4]; //0x00AC
}; //Size: 0x00B0
static_assert(sizeof(RopewayPlRainEffect) == 0xB0);

class REDynamicsComponentBase : public REComponent
{
public:
	class REDynamicsWorld *world; //0x0040
	char pad_0048[8]; //0x0048
}; //Size: 0x0050
static_assert(sizeof(REDynamicsComponentBase) == 0x50);

class REDynamicsRigidBodySet : public REDynamicsComponentBase
{
public:
	char pad_0050[144]; //0x0050
}; //Size: 0x00E0
static_assert(sizeof(REDynamicsRigidBodySet) == 0xE0);

class REDynamicsRagdoll : public REDynamicsRigidBodySet
{
public:
	char pad_00E0[32]; //0x00E0
	class REString name; //0x0100
	char pad_0120[200]; //0x0120
}; //Size: 0x01E8
static_assert(sizeof(REDynamicsRagdoll) == 0x1E8);

class REDynamicsWorld : public REManagedObject
{
public:
	char pad_0020[152]; //0x0020
	class REScene *scene; //0x00B8
	char pad_00C0[4448]; //0x00C0
	class REDynamicsWorld *world; //0x1220
	char pad_1228[504]; //0x1228
}; //Size: 0x1420
static_assert(sizeof(REDynamicsWorld) == 0x1420);

class RERenderMesh : public REComponent
{
public:
	char pad_0040[736]; //0x0040
}; //Size: 0x0320
static_assert(sizeof(RERenderMesh) == 0x320);

class RopewayExtraJoint : public REManagedObject
{
public:
	char pad_0020[8]; //0x0020
	class REMotion *motion; //0x0028
	char pad_0030[8]; //0x0030
	class REManagedObject *param; //0x0038
	int32_t N00002152; //0x0040
	char pad_0044[4]; //0x0044
}; //Size: 0x0048
static_assert(sizeof(RopewayExtraJoint) == 0x48);

class RopewayImplementVirtualJoint : public RopewayExtraJoint
{
public:
}; //Size: 0x0048
static_assert(sizeof(RopewayImplementVirtualJoint) == 0x48);

class RopewayMotionEventHandler : public REBehavior
{
public:
	char pad_0058[16]; //0x0058
	class REMotion *motion; //0x0068
	class REManagedObject *N00002175; //0x0070
	class REPtrArray *layers; //0x0078
}; //Size: 0x0080
static_assert(sizeof(RopewayMotionEventHandler) == 0x80);

class N000021BE : public REBehavior
{
public:
}; //Size: 0x0058
static_assert(sizeof(N000021BE) == 0x58);

class WwiseContainer : public N000021BE
{
public:
	char pad_0058[456]; //0x0058
}; //Size: 0x0220
static_assert(sizeof(WwiseContainer) == 0x220);

class RopewayWwiseContainerApp : public WwiseContainer
{
public:
	char pad_0220[32]; //0x0220
	class REPtrArray *autoTriggerReceivers; //0x0240
}; //Size: 0x0248
static_assert(sizeof(RopewayWwiseContainerApp) == 0x248);

class RopewayImplementGun : public RopewayImplementArm
{
public:
	char pad_0158[184]; //0x0158
}; //Size: 0x0210
static_assert(sizeof(RopewayImplementGun) == 0x210);

class RopewaySurvivorDefineDamageParam : public REManagedObject
{
public:
	int32_t damageType; //0x0020
	bool isDead; //0x0024
	char pad_0025[3]; //0x0025
}; //Size: 0x0028
static_assert(sizeof(RopewaySurvivorDefineDamageParam) == 0x28);

class RopewaySurvivorActionOrderer : public REBehavior
{
public:
	char pad_0058[12]; //0x0058
	uint32_t petient; //0x0064
	char pad_0068[8]; //0x0068
	Vector4f charDir; //0x0070
	Vector4f moveDir; //0x0080
	Vector4f watchDir; //0x0090
	char pad_00A0[80]; //0x00A0
}; //Size: 0x00F0
static_assert(sizeof(RopewaySurvivorActionOrderer) == 0xF0);

class RopewaySurvivorPlayerActionOrderer : public RopewaySurvivorActionOrderer
{
public:
	class RopewayTimer *timer1; //0x00F0
	class RopewayTimer *timer2; //0x00F8
	class RopewayTimer *timer3; //0x0100
	char pad_0108[8]; //0x0108
	class RopewaySurvivorPlayerCondition *parentCondition; //0x0110
}; //Size: 0x0118
static_assert(sizeof(RopewaySurvivorPlayerActionOrderer) == 0x118);

class RopewaySurvivorController : public REBehavior
{
public:
	char pad_0058[16]; //0x0058
	class DampingRangeFloat *charAngle; //0x0068
	class DampingRangeFloat *moveAngle; //0x0070
	class DampingRangeFloat *watchAngle; //0x0078
	class DampingRangeFloat *watchAngleX; //0x0080
	class DampingRangeFloat *wheelBlendRate; //0x0088
	class DampingRangeFloat *wheelSpeed; //0x0090
	class REAnimationCurve *wheelBlendRateCurve; //0x0098
	class REAnimationCurve *wheelSpeedCurve; //0x00A0
	bool autoUpdateCharDir; //0x00A8
	bool autoUpdateMoveDir; //0x00A9
	bool autoUpdateWatchDir; //0x00AA
	bool autoUpdateWheel; //0x00AB
	char pad_00AC[4]; //0x00AC
	class REAnimationCurve *stairToSlopeCurve; //0x00B0
	class DampingFloat *dampingStairValue; //0x00B8
	class RopewaySurvivorControllerStepCheck *stepChecker; //0x00C0
	char pad_00C8[8]; //0x00C8
	class RopewaySurvivorPlayerCondition *parentCondition; //0x00D0
}; //Size: 0x00D8
static_assert(sizeof(RopewaySurvivorController) == 0xD8);

class RopewaySurvivorPlayerController : public RopewaySurvivorController
{
public:
	float N00002361; //0x00D8
	float N00002390; //0x00DC
	float charDirDampingRate; //0x00E0
	float N00002393; //0x00E4
	float N00002363; //0x00E8
	float N00002396; //0x00EC
	float N00002364; //0x00F0
	float N00002399; //0x00F4
	class RopewaySurvivorPlayerCondition *parentCondition_; //0x00F8
}; //Size: 0x0100
static_assert(sizeof(RopewaySurvivorPlayerController) == 0x100);

class RopewaySurvivorControllerStepCheck : public REManagedObject
{
public:
	Vector4f footLPos; //0x0020
	Vector4f footRPos; //0x0030
	float footDistance; //0x0040
	float weight; //0x0044
	class REJoint *leftJoint; //0x0048
	class REJoint *rightJoint; //0x0050
	class SystemString *leftName; //0x0058
	class SystemString *rightName; //0x0060
	char pad_0068[8]; //0x0068
}; //Size: 0x0070
static_assert(sizeof(RopewaySurvivorControllerStepCheck) == 0x70);

class DampingRangeFloat : public DampingFloat
{
public:
	float low; //0x0054
	float high; //0x0058
	bool isLoop; //0x005C
	char pad_005D[3]; //0x005D
	float divertPriority; //0x0060
}; //Size: 0x0064
static_assert(sizeof(DampingRangeFloat) == 0x64);

class N000024E5
{
public:
	float value; //0x0000
	int16_t N000024EA; //0x0004
	int16_t N000024F1; //0x0006
	char pad_0008[8]; //0x0008
}; //Size: 0x0010
static_assert(sizeof(N000024E5) == 0x10);

class CurveKeyFrames
{
public:
	class N000024E5 data[2048]; //0x0000
}; //Size: 0x8000
static_assert(sizeof(CurveKeyFrames) == 0x8000);

class N000024E0
{
public:
	Vector4f N000024E1; //0x0000
}; //Size: 0x0010
static_assert(sizeof(N000024E0) == 0x10);

class RopewayInputSystem : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	class RopewayInputSystemButtonMaskBit *maskbit1; //0x0060
	class RopewayInputSystemButtonMaskBit *maskbit2; //0x0068
	class DotNetGenericList *commandList; //0x0070
	float N00001E29; //0x0078
	float N00003AE0; //0x007C
	float N00001E2A; //0x0080
	char pad_0084[4]; //0x0084
	class DotNetGenericList *defineList; //0x0088
	class DotNetGenericList *lightBarColorParams; //0x0090
	class DotNetGenericList *keyAssignUserData; //0x0098
	char pad_00A0[40]; //0x00A0
	class HIDJoypadDevice *joypadDevice; //0x00C8
	class RopewayInputSystemAnalogStick *analogStick; //0x00D0
	class InputSystemButton *button; //0x00D8
	char pad_00E0[32]; //0x00E0
	Vector2f cameraSensitivity; //0x0100
	char pad_0108[64]; //0x0108
	int16_t mouseMoveRingBufferSize; //0x0148
	char pad_014A[2]; //0x014A
	float mouseDelta; //0x014C
	float mouseMoveThreshold; //0x0150
	char pad_0154[44]; //0x0154
}; //Size: 0x0180
static_assert(sizeof(RopewayInputSystem) == 0x180);

class RopewayInputSystemButtonMaskBit : public REManagedObject
{
public:
	int64_t bits; //0x0020
	bool reset; //0x0028
	char pad_0029[7]; //0x0029
}; //Size: 0x0030
static_assert(sizeof(RopewayInputSystemButtonMaskBit) == 0x30);

class InputSystemButton : public REManagedObject
{
public:
	char pad_0020[24]; //0x0020
}; //Size: 0x0038
static_assert(sizeof(InputSystemButton) == 0x38);

class HIDNativeDeviceBase : public REManagedObject
{
public:
	char pad_0020[272]; //0x0020
}; //Size: 0x0130
static_assert(sizeof(HIDNativeDeviceBase) == 0x130);

class HIDGamePadDevice : public HIDNativeDeviceBase
{
public:
	char pad_0130[384]; //0x0130
}; //Size: 0x02B0
static_assert(sizeof(HIDGamePadDevice) == 0x2B0);

class HIDJoypadDevice : public HIDGamePadDevice
{
public:
	char pad_02B0[16]; //0x02B0
}; //Size: 0x02C0
static_assert(sizeof(HIDJoypadDevice) == 0x2C0);

class RopewayInputSystemAnalogStick : public REManagedObject
{
public:
	Vector2f axis; //0x0020
	char pad_0028[8]; //0x0028
	Vector2f axisOld; //0x0030
	char pad_0038[8]; //0x0038
	Vector2f rawAxis; //0x0040
	char pad_0048[24]; //0x0048
	float angle; //0x0060
	float angleOld; //0x0064
	float angularVelocity; //0x0068
	float magnitude; //0x006C
	int32_t power; //0x0070
	int32_t powerH; //0x0074
	int32_t powerV; //0x0078
	float N00001F51; //0x007C
	int32_t N00001F58; //0x0080
	char pad_0084[12]; //0x0084
}; //Size: 0x0090
static_assert(sizeof(RopewayInputSystemAnalogStick) == 0x90);

class RopewaySurvivorManager : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	class RopewaySurvivorPlayerCondition *playerCondition; //0x0060
	char pad_0068[8]; //0x0068
	class RopewaySurvivorCastingRequest *castingRequest; //0x0070
	class DotNetGenericList *instantiateRequests; //0x0078
	class DotNetGenericList *survivorPrefabInfo; //0x0080
	class DotNetGenericDictionary *survivorTypesToConditions; //0x0088 SurvivorType->ActorCondition
	class SystemAction *actionPlayerCondition; //0x0090
	class SystemAction *actionNpcCondition; //0x0098
	char pad_00A0[8]; //0x00A0
	class SystemAction *survivorTypeAction1; //0x00A8
	class SystemAction *survivorTypeAction2; //0x00B0
	char pad_00B8[8]; //0x00B8
	class RopewaySurvivorCastingRequest *castingRequest2; //0x00C0
	void *uservarAccessor_Survivor; //0x00C8
	char pad_00D0[8]; //0x00D0
	class RopewaySettingFolder *playerFolder; //0x00D8
	class RopewaySettingFolder *npcFolder; //0x00E0
	class RopewaySettingFolder *actorFolder; //0x00E8
	class UserData *conditionSettingUserData; //0x00F0
	class DotNetGenericDictionary *survivorTypeToExistSurvivorInfo; //0x00F8
	class DotNetGenericList *existSurvivorInfos; //0x0100
	class REManagedObject *N000058DF; //0x0108
}; //Size: 0x0110
static_assert(sizeof(RopewaySurvivorManager) == 0x110);

class RopewaySurvivorCastingRequest : public REManagedObject
{
public:
	char pad_0020[24]; //0x0020
}; //Size: 0x0038
static_assert(sizeof(RopewaySurvivorCastingRequest) == 0x38);

class SystemDelegate : public REManagedObject
{
public:
}; //Size: 0x0020
static_assert(sizeof(SystemDelegate) == 0x20);

class DelegateElement
{
public:
	class REManagedObject *obj; //0x0000
	void* funcPtr; //0x0008
}; //Size: 0x0010
static_assert(sizeof(DelegateElement) == 0x10);

class SystemMulticastDelegate : public SystemDelegate
{
public:
	int32_t numElements; //0x0020
	int32_t N00005A07; //0x0024
	class DelegateElement delegates[2048]; //0x0028
}; //Size: 0x8028
static_assert(sizeof(SystemMulticastDelegate) == 0x8028);

class SystemAction : public SystemMulticastDelegate
{
public:
}; //Size: 0x8028
static_assert(sizeof(SystemAction) == 0x8028);

class RopewaySettingFolder : public REManagedObject
{
public:
	class REFolder *folder; //0x0020
	class SystemString *name; //0x0028
}; //Size: 0x0030
static_assert(sizeof(RopewaySettingFolder) == 0x30);

class SurvivorConditionTimerTrigger : public REManagedObject
{
public:
	float old; //0x0020
	float current; //0x0024
	float threshold; //0x0028
}; //Size: 0x002C
static_assert(sizeof(SurvivorConditionTimerTrigger) == 0x2C);

class RERangeI
{
public:
	int32_t min; //0x0000
	int32_t max; //0x0004
}; //Size: 0x0008
static_assert(sizeof(RERangeI) == 0x8);

class RopewayEnemyController : public REBehavior
{
public:
	char pad_0058[44]; //0x0058
	float baseMotionSpeed; //0x0084
	int32_t lod; //0x0088
	class RERangeI renderLodRange; //0x008C
	char pad_0094[12]; //0x0094
	class DotNetGenericList *temporaryEventStorage; //0x00A0
	class RopewayEnemyEmSaveData *enemySaveData; //0x00A8
	char pad_00B0[64]; //0x00B0
	float N00001E0B; //0x00F0
	float N00001E80; //0x00F4
	char pad_00F8[8]; //0x00F8
	Vector4f firstAvailablePos; //0x0100
	char pad_0110[40]; //0x0110
	class SystemAction *thinkAction; //0x0138
	char pad_0140[16]; //0x0140
	class RopewayEnemyContextController *enemyContextController; //0x0150
	class RopewayEnemyEmCommonContext *enemyContext; //0x0158
	class RopewayBitFlag *conditionStateBitFlag; //0x0160
	class RopewayBitFlag *conditionStateBitFlag2; //0x0168
	char pad_0170[4]; //0x0170
	int32_t N0000201A; //0x0174
	class DotNetGenericList *meshes; //0x0178
	char pad_0180[8]; //0x0180
	class REManagedObject *N00001EB1; //0x0188
	class CollisionSystemAsyncCastRayHandle *castRayHandle; //0x0190
	char pad_0198[4]; //0x0198
	float attackAuthorityKeepRange; //0x019C
	Vector4f attackAuthorityRangeBasePositionOffset; //0x01A0
	class RERenderMesh *mesh; //0x01B0
	class REMotion *motion; //0x01B8
	class REActorMotion *actorMotion; //0x01C0
	char pad_01C8[304]; //0x01C8
}; //Size: 0x02F8
static_assert(sizeof(RopewayEnemyController) == 0x2F8);

class RopewayEnemyContextController : public REBehavior
{
public:
	char pad_0058[12]; //0x0058
	int32_t initialKindId; //0x0064
	char pad_0068[16]; //0x0068
}; //Size: 0x0078
static_assert(sizeof(RopewayEnemyContextController) == 0x78);

class RopewayEnemyEmCommonContext : public REBehavior
{
public:
	char pad_0058[32]; //0x0058
	class REGameObject *enemyGameObject; //0x0078
	bool spawnStandby; //0x0080
	bool requestedPrefabStandby; //0x0081
	bool requestedSpawn; //0x0082
	bool isStayStandbyArea; //0x0083
	bool isStayActiveArea; //0x0084
	bool isEliminated; //0x0085
	bool N00002016; //0x0086
	bool N00002014; //0x0087
	int32_t instanceStatus; //0x0088 app.ropeway.enemy.EmCommonContext.InstanceStatus
	char pad_008C[44]; //0x008C
}; //Size: 0x00B8
static_assert(sizeof(RopewayEnemyEmCommonContext) == 0xB8);

class SystemGuid
{
public:
	char pad_0000[16]; //0x0000
}; //Size: 0x0010
static_assert(sizeof(SystemGuid) == 0x10);

class RopewayEnemyEmSaveData : public REManagedObject
{
public:
	uint32_t dataVersion; //0x0020
	char pad_0024[4]; //0x0024
	class SystemGuid guid; //0x0028
	int16_t inheritId; //0x0038
	char pad_003A[2]; //0x003A
	int32_t kindId; //0x003C
	float birthedTime; //0x0040
	float unloadedTime; //0x0044
	char pad_0048[72]; //0x0048
}; //Size: 0x0090
static_assert(sizeof(RopewayEnemyEmSaveData) == 0x90);

class RopewayBitFlag : public REManagedObject
{
public:
	int32_t flag; //0x0020
	char pad_0024[4]; //0x0024
}; //Size: 0x0028
static_assert(sizeof(RopewayBitFlag) == 0x28);

class CollisionSystemAsyncCastHandleBase : public REManagedObject
{
public:
	bool isFinish; //0x0020
	char pad_0021[7]; //0x0021
	class REGameObject *owner; //0x0028
	int32_t castType; //0x0030
	int16_t id; //0x0034
	char pad_0036[10]; //0x0036
	Vector4f startPos; //0x0040
	Vector4f endPos; //0x0050
	class PhysicsFilterInfo *filterInfo; //0x0060
	uint32_t N00002199; //0x0068
	float period; //0x006C
	int16_t priority; //0x0070
	char pad_0072[2]; //0x0072
	bool isSkip; //0x0074
	char pad_0075[3]; //0x0075
	class AsyncCastHandleResultData *lastResultData; //0x0078
	char pad_0080[16]; //0x0080
}; //Size: 0x0090
static_assert(sizeof(CollisionSystemAsyncCastHandleBase) == 0x90);

class CollisionSystemAsyncCastRayHandle : public CollisionSystemAsyncCastHandleBase
{
public:
}; //Size: 0x0090
static_assert(sizeof(CollisionSystemAsyncCastRayHandle) == 0x90);

class RopewayEnemyManager : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	class DotNetGenericList *enemyInfos; //0x0060 app.ropeway.EnemyManager.RegisterEnemyInfo
	class DotNetGenericList *enemyControllers; //0x0068
	class DotNetGenericList *gameObjects; //0x0070
	bool isExistEnemyObject; //0x0078
	char pad_0079[3]; //0x0079
	float dataLoadAttackThroughSec; //0x007C
	bool isPausing; //0x0080
	bool isInvisible; //0x0081
	bool isTimelinePausing; //0x0082
	char pad_0083[5]; //0x0083
	class RopewayEnemyController *grapplingOwner; //0x0088
	float N00001F82; //0x0090
	char pad_0094[4]; //0x0094
	class RopewayEnemyLODSettingUserData *lodSettings; //0x0098
	float totalEnemyCost; //0x00A0
	char pad_00A4[4]; //0x00A4
	class SystemAction *N00001F25; //0x00A8
	class SystemAction *N00001F53; //0x00B0
	bool hasActiveEnemyUpdateRequest; //0x00B8
	char pad_00B9[7]; //0x00B9
	class REManagedObject *N00001F55; //0x00C0
	class RopewayCameraStatus *cameraStatus; //0x00C8
	class REManagedObject *N00001F57; //0x00D0
	class DotNetGenericList *instantiateRequests; //0x00D8
	class DotNetGenericList *destroyRequests; //0x00E0
	class DotNetGenericDictionary *mapIdsToSceneLoadStatus; //0x00E8
	char pad_00F0[8]; //0x00F0
	class DotNetGenericList *sceneLoadStatuses; //0x00F8
	class DotNetGenericList *mapIds; //0x0100
	class REPtrArray *gameObjectsToControllers; //0x0108 list of dictionaries
	class DotNetGenericList *em6200ChaserControllers; //0x0110
	class REManagedObject *N00002224; //0x0118
	char pad_0120[8]; //0x0120
	class RopewayEnemyManagerFrameTimer *frameTimers[6]; //0x0128 ThinkOffTimer, NoAttackTimer, AttackThroughTimer, NoHoldTimerEm4000, NoBackHoldTimerEm4000, NoAttackTimerEm4000
	class DotNetGenericDictionary *guidsToSaveData; //0x0158
	uint32_t totalEnemyKillCount; //0x0160
	char pad_0164[4]; //0x0164
	class REManagedObject *N0000222A; //0x0168
	class REManagedObject *N0000222B; //0x0170
	class REManagedObject *N0000222C; //0x0178
	class REManagedObject *N0000222D; //0x0180
	char pad_0188[8]; //0x0188
}; //Size: 0x0190
static_assert(sizeof(RopewayEnemyManager) == 0x190);

class RopewayEnemyLODSettingUserData : public UserData
{
public:
	float distanceLevels[5]; //0x0040
}; //Size: 0x0054
static_assert(sizeof(RopewayEnemyLODSettingUserData) == 0x54);

class RopewayEnemyManagerFrameTimer : public REManagedObject
{
public:
	bool run; //0x0020
	char pad_0021[7]; //0x0021
	uint64_t delayFrame; //0x0028
	uint64_t endFrame; //0x0030
	uint64_t frameCount; //0x0038
}; //Size: 0x0040
static_assert(sizeof(RopewayEnemyManagerFrameTimer) == 0x40);

class RENativeArray // via.array
{
public:
	class RENativeArrayData *data; //0x0000
	int32_t size; //0x0008
	int32_t numAllocated; //0x000C
}; //Size: 0x0010
static_assert(sizeof(RENativeArray) == 0x10);

class RENativeArrayData
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008
static_assert(sizeof(RENativeArrayData) == 0x8);

class RopewayCameraStatus : public REManagedObject
{
public:
	char pad_0020[384]; //0x0020
}; //Size: 0x01A0
static_assert(sizeof(RopewayCameraStatus) == 0x1A0);

class RopewayCameraInterpolateSettings : public UserData
{
public:
	void *curveParamTable; //0x0040
}; //Size: 0x0048
static_assert(sizeof(RopewayCameraInterpolateSettings) == 0x48);

class CollisionSystemAsyncCastSphereHandle : public CollisionSystemAsyncCastHandleBase
{
public:
	class RESphere *sphere; //0x0090
}; //Size: 0x0098
static_assert(sizeof(CollisionSystemAsyncCastSphereHandle) == 0x98);

class RESphere
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008
static_assert(sizeof(RESphere) == 0x8);

class RERenderCaptureToTexture : public REComponent
{
public:
	bool N00004053; //0x0040
	bool N00004069; //0x0041
	bool enableAlphaChannel; //0x0042
	char pad_0043[45]; //0x0043
	bool enableReplayScene; //0x0070
	char pad_0071[39]; //0x0071
	float N0000405E; //0x0098
	float N00004074; //0x009C
}; //Size: 0x00A0
static_assert(sizeof(RERenderCaptureToTexture) == 0xA0);

class AsyncCastHandleResultData : public REManagedObject
{
public:
	char pad_0020[32]; //0x0020
	Vector4f startPos; //0x0040
	Vector4f endPos; //0x0050
	char pad_0060[16]; //0x0060
}; //Size: 0x0070
static_assert(sizeof(AsyncCastHandleResultData) == 0x70);

class ValueTriggerInt : public REManagedObject
{
public:
	int32_t current; //0x0020
	int32_t old; //0x0024
	int32_t lastFrame; //0x0028
}; //Size: 0x002C
static_assert(sizeof(ValueTriggerInt) == 0x2C);

class ActionTriggerInt : public ValueTriggerInt
{
public:
	char pad_002C[4]; //0x002C
	class SystemAction *action; //0x0030
}; //Size: 0x0038
static_assert(sizeof(ActionTriggerInt) == 0x38);

class IkControlStatusArray : public REArrayBase
{
public:
	class RopewayIkControlStatus *N00004982[6]; //0x0030
}; //Size: 0x0060
static_assert(sizeof(IkControlStatusArray) == 0x60);

class RopewayIkControlStatus : public REManagedObject
{
public:
	int32_t ikKind; //0x0020
	float currentBlendRate; //0x0024
	bool hasChild; //0x0028
	bool activeAnyChild; //0x0029
	char pad_002A[14]; //0x002A
	bool hasExtraBlendRate; //0x0038
	char pad_0039[3]; //0x0039
	float currentExtraBlendRate; //0x003C
	float extraBlendLerpTime; //0x0040
	int32_t N00004A6E; //0x0044
	class RopewayIkWrapper *ik; //0x0048
	int32_t N00004ACF; //0x0050
	char pad_0054[4]; //0x0054
	class DotNetGenericDictionary *N00004A98; //0x0058
	class RopewayRangeLerpFloat *rangeLerp1; //0x0060
	class RopewayRangeLerpFloat *rangeLerp2; //0x0068
	class RopewayRangeLerpFloat *rangeLerp3; //0x0070
	void *N00004A9A; //0x0078
	void *N00004AD5; //0x0080
	int32_t N00004A45; //0x0088
	float N00004DBD; //0x008C
}; //Size: 0x0090
static_assert(sizeof(RopewayIkControlStatus) == 0x90);

class RopewayIkWrapper : public REManagedObject
{
public:
	bool setupped; //0x0020
	char pad_0021[7]; //0x0021
	class REMotionIkLeg *N00004B67; //0x0028
	char pad_0030[88]; //0x0030
}; //Size: 0x0088
static_assert(sizeof(RopewayIkWrapper) == 0x88);

class REMotionIkLeg : public RESecondaryAnimation
{
public:
	char pad_0058[1904]; //0x0058
	float heelHeight; //0x07C8
	float toeHeight; //0x07CC
	float groundContactUpDistance; //0x07D0
	float groundContactDownDistance; //0x07D4
	float groundContactRotationAdjustDistance; //0x07D8
	char pad_07DC[4]; //0x07DC
	int32_t effectorTarget; //0x07E0
	int32_t centerAdjust; //0x07E4
	char pad_07E8[32]; //0x07E8
	int32_t toeControlOption; //0x0808
	int32_t rayCastSkipOption; //0x080C
	float blendRate; //0x0810
	float adjustFootRotRate; //0x0814
	float adjustFootDamping; //0x0818
	float N00004EF8; //0x081C
	float adjustFootBottomRate; //0x0820
	float adjustFootUpwardRate; //0x0824
	float N00004CB3; //0x0828
	float centerAdjustRate; //0x082C
	float centerDampingRate; //0x0830
	float N00004EFE; //0x0834
	float centerRXAdjustRate; //0x0838
	float centerRZAdjustRate; //0x083C
	float distanceLimitRate; //0x0840
	float centerAdjustUpwardRate; //0x0844
	float wallLimitAngle; //0x0848
	float N00004EF0; //0x084C
	float footRollLimit; //0x0850
	float N00004EF2; //0x0854
	int32_t jointNumBetweenHeelAndToe; //0x0858
	int32_t rayCastInterval; //0x085C
	char pad_0860[210]; //0x0860
	bool enabledGroundAdjust; //0x0932
	char pad_0933[2]; //0x0933
	bool skipIkIfNoHitDetail; //0x0935
	bool useIkSpine; //0x0936
	char pad_0937[361]; //0x0937
}; //Size: 0x0AA0
static_assert(sizeof(REMotionIkLeg) == 0xAA0);

class RopewayRangeLerpFloat : public REManagedObject
{
public:
	float lerpSpeed; //0x0020
	float min; //0x0024
	float max; //0x0028
	bool isLoop; //0x002C
	char pad_002D[3]; //0x002D
	float loopPriority; //0x0030
	bool isInterpolating; //0x0034
	char pad_0035[3]; //0x0035
	float target; //0x0038
	float current; //0x003C
}; //Size: 0x0040
static_assert(sizeof(RopewayRangeLerpFloat) == 0x40);

class RopewayEquipmentManager : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	class DotNetGenericList *prefabInfoList; //0x0060
	class DotNetGenericList *characterMotionPrefabInfoList; //0x0068
	class DotNetGenericList *equipments; //0x0070
	class DotNetGenericList *instantiateRequestList; //0x0078
	class RopewayWeaponEquippedPositionUserData *weaponEquippedPositionData; //0x0080
	class RopewayWeaponBulletUserData *weaponBulletData; //0x0088
	char pad_0090[16]; //0x0090
}; //Size: 0x00A0
static_assert(sizeof(RopewayEquipmentManager) == 0xA0);

class RopewayWeaponBulletUserData : public UserData
{
public:
	char pad_0040[8]; //0x0040
	bool enableDebug; //0x0048
	char pad_0049[3]; //0x0049
	int32_t debugWeaponType; //0x004C
	int32_t debugWeaponParts; //0x0050
	char pad_0054[4]; //0x0054
}; //Size: 0x0058
static_assert(sizeof(RopewayWeaponBulletUserData) == 0x58);

class RopewayWeaponEquippedPositionUserData : public UserData
{
public:
	char pad_0040[8]; //0x0040
}; //Size: 0x0048
static_assert(sizeof(RopewayWeaponEquippedPositionUserData) == 0x48);

class RopewayGameMaster : public REBehavior
{
public:
	char pad_0058[8]; //0x0058
	class UserData *difficultySettings; //0x0060
	class UserData *continueRankPoint; //0x0068
	bool isWindows10; //0x0070
	char pad_0071[3]; //0x0071
	int32_t machine; //0x0074
	int32_t machineDetail; //0x0078
	int32_t operatingSystem; //0x007C
	int32_t servicePlatform; //0x0080
	int32_t criticalRateController; //0x0084
}; //Size: 0x0088
static_assert(sizeof(RopewayGameMaster) == 0x88);

class ManagedEnumValuesPtr
{
public:
	char *(*names)[8192]; //0x0000
}; //Size: 0x0008
static_assert(sizeof(ManagedEnumValuesPtr) == 0x8);

class REEnumMap
{
public:
	class REEnumNode *first; //0x0000
	int32_t num; //0x0008
	char pad_000C[4]; //0x000C
}; //Size: 0x0010
static_assert(sizeof(REEnumMap) == 0x10);

class ManagedEnums : public REEnumMap
{
public:
	class RENativeArray enumValues; //0x0010
}; //Size: 0x0020
static_assert(sizeof(ManagedEnums) == 0x20);

class N00006DF9
{
public:
	char pad_0000[16]; //0x0000
	class RENativeArray enumValues; //0x0010
	char pad_0020[304]; //0x0020
}; //Size: 0x0150
static_assert(sizeof(N00006DF9) == 0x150);

class N00006EE3
{
public:
	class REEnumDescriptor *N00006EE4; //0x0000
	class N00006F33 *N00006EE5; //0x0008
	class N00006F56 *N00006EE6; //0x0010
	char pad_0018[8]; //0x0018
}; //Size: 0x0020
static_assert(sizeof(N00006EE3) == 0x20);

class REEnumNode
{
public:
	class REEnumDescriptor *N00007017; //0x0000
	class REEnumDescriptor *N0000702A; //0x0008
	class REEnumDescriptor *N0000702B; //0x0010
	char pad_0018[8]; //0x0018
}; //Size: 0x0020
static_assert(sizeof(REEnumNode) == 0x20);

class REEnumData
{
public:
	char *name; //0x0000
	bool N000070A2; //0x0008
	char pad_0009[7]; //0x0009
	class REEnumValueNode *values; //0x0010
	void *N000070A4; //0x0018
	char pad_0020[24]; //0x0020
}; //Size: 0x0038
static_assert(sizeof(REEnumData) == 0x38);

class REEnumPair
{
public:
	uint32_t first; //0x0000
	char pad_0004[4]; //0x0004
	class REEnumData second; //0x0008
}; //Size: 0x0040
static_assert(sizeof(REEnumPair) == 0x40);

class REEnumDescriptor : public REEnumNode
{
public:
	class REEnumPair data; //0x0020
	char pad_0060[332]; //0x0060
}; //Size: 0x01AC
static_assert(sizeof(REEnumDescriptor) == 0x1AC);

class N00006F33
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008
static_assert(sizeof(N00006F33) == 0x8);

class N00006F56
{
public:
	char pad_0000[8]; //0x0000
}; //Size: 0x0008
static_assert(sizeof(N00006F56) == 0x8);

class REEnumValueNode
{
public:
	char *name; //0x0000
	int64_t value; //0x0008
	class REEnumValueNode *next; //0x0010
}; //Size: 0x0018
static_assert(sizeof(REEnumValueNode) == 0x18);

class StdMap
{
public:
	class StdMapNode *_MyHead; //0x0000
	int32_t _MySize; //0x0008
	char pad_000C[4]; //0x000C
}; //Size: 0x0010
static_assert(sizeof(StdMap) == 0x10);

class StdMapData
{
public:
	char pad_0000[120]; //0x0000
}; //Size: 0x0078
static_assert(sizeof(StdMapData) == 0x78);

class StdMapNode
{
public:
	class StdMapNode *N00008173; //0x0000
	class StdMapNode *N00008174; //0x0008
	class StdMapNode *N00008175; //0x0010
	char pad_0018[8]; //0x0018
	class StdMapData data; //0x0020
}; //Size: 0x0098
static_assert(sizeof(StdMapNode) == 0x98);

class TypeList // RENativeArray
{
public:
	class REType *(*data)[50000]; //0x0000
	int32_t size; //0x0008
	int32_t numAllocated; //0x000C
	char pad_0010[120]; //0x0010
}; //Size: 0x0088
static_assert(sizeof(TypeList) == 0x88);

class MethodParamInfo
{
public:
	char pad_0000[8]; //0x0000
	char *paramName; //0x0008
	uint32_t paramTypeFlag; //0x0010 AND 1f
	uint32_t typeIndex; //0x0014
	char *typeName; //0x0018
}; //Size: 0x0020
static_assert(sizeof(MethodParamInfo) == 0x20);

class RopewayScriptEffectManager : public REBehavior
{
public:
	char pad_0058[9]; //0x0058
	bool isDisableAllEffect; //0x0061
	char pad_0062[182]; //0x0062
}; //Size: 0x0118
static_assert(sizeof(RopewayScriptEffectManager) == 0x118);

class RERenderDepthOfField : public REComponent
{
public:
	char pad_0040[24]; //0x0040
	bool enabled; //0x0058
	char pad_0059[15]; //0x0059
}; //Size: 0x0068
static_assert(sizeof(RERenderDepthOfField) == 0x68);

class RopewayPostEffectControllerBase : public REBehavior
{
public:
	char pad_0058[32]; //0x0058
	class REComponent *effectComponent; //0x0078
	class RopewayPostEffectFilterParamBase *param1; //0x0080
	class RopewayPostEffectFilterParamBase *param2; //0x0088
	class REGameObject *cameraObject; //0x0090
	char pad_0098[8]; //0x0098
	class RopewayPostEffectCascade *cascade; //0x00A0
	class REGameObject *cameraObject2; //0x00A8
	char pad_00B0[8]; //0x00B0
	class RopewayPostEffectFilterParamBase *param3; //0x00B8
	class RopewayFilterSettingBase *filterSetting; //0x00C0
	class RopewayPostEffectFilterParamBase *param4; //0x00C8
	char pad_00D0[24]; //0x00D0
}; //Size: 0x00E8
static_assert(sizeof(RopewayPostEffectControllerBase) == 0xE8);

class RopewayFilterSettingBase : public REBehavior
{
public:
	char pad_0058[16]; //0x0058
	class RopewayPostEffectFilterParamBase *param; //0x0068
	float interpolationSpan; //0x0070
	int32_t layerApplyType; //0x0074 app::ropeway::posteffect::setting::FilterSettingRoot::ApplyType
	class RopewayPostEffectFilterParamBase *currentParam; //0x0078
	class RopewayPostEffectFilterParamBase *param1; //0x0080
	class RopewayPostEffectFilterParamBase *param2; //0x0088
	char pad_0090[8]; //0x0090
}; //Size: 0x0098
static_assert(sizeof(RopewayFilterSettingBase) == 0x98);

class RopewayPostEffectFilterParamBase : public REManagedObject
{
public:
	char pad_0020[32]; //0x0020
}; //Size: 0x0040
static_assert(sizeof(RopewayPostEffectFilterParamBase) == 0x40);

class RopewayPostEffectCascade : public REBehavior
{
public:
	char pad_0058[48]; //0x0058
}; //Size: 0x0088
static_assert(sizeof(RopewayPostEffectCascade) == 0x88);

class RopewayFilterParamAccessable : public RopewayPostEffectFilterParamBase
{
public:
	char pad_0040[16]; //0x0040
	bool timelineOverwrite; //0x0050
	char pad_0051[11]; //0x0051
	float timelineBlendRate; //0x005C
}; //Size: 0x0060
static_assert(sizeof(RopewayFilterParamAccessable) == 0x60);

class RopewayPostEffectToneMapping : public RopewayFilterParamAccessable
{
public:
	bool enabled; //0x0060
	char pad_0061[3]; //0x0061
	float ev; //0x0064
	float maxWhitePoint; //0x0068
	float minWhitePoint; //0x006C
	float whiteRange; //0x0070
	float tonemapRange; //0x0074
	float preTonemapRange; //0x0078
	float brightAdaptationRate; //0x007C
	float darkAdaptationRate; //0x0080
	int32_t vignetting; //0x0084 via::render::ToneMapping::Vignetting
	int32_t autoExposure; //0x0088 via::render::ToneMapping::AutoExposure
	float kerareBeginAngle; //0x008C kerare = vignetting in japanese
	float linearSectionBegin; //0x0090
	float linearSectionLength; //0x0094
	float sdrToe; //0x0098
	float hdrToe; //0x009C
	float kerareEndAngle; //0x00A0
	char pad_00A4[4]; //0x00A4
	void *textureResource; //0x00A8
	char pad_00B0[8]; //0x00B0
	int32_t temporalAAAlgorithm; //0x00B8 via::render::ToneMapping::TemporalAAAlgorithm
	int32_t temporalAA; //0x00BC via::render::ToneMapping::TemporalAA
	bool echoEnabled; //0x00C0
	char pad_00C1[3]; //0x00C1
	float antiAliasingBlendRate; //0x00C4
	float temporalJitterScale; //0x00C8
	float sharpness; //0x00CC
}; //Size: 0x00D0
static_assert(sizeof(RopewayPostEffectToneMapping) == 0xD0);

class REInstantiationDescriptor
{
public:
	class REObjectInfo *type; //0x0000
	uint32_t N00008AC9; //0x0008
	uint32_t N00008B38; //0x000C
	uint32_t size; //0x0010
	uint32_t N00008B3A; //0x0014
	char pad_0018[40]; //0x0018
}; //Size: 0x0040
static_assert(sizeof(REInstantiationDescriptor) == 0x40);

class MethodParams
{
public:
	char pad_0000[48]; //0x0000
	void ***in_data; //0x0030 can point to data
	void **out_data; //0x0038 can be whatever, can be a dword, can point to data
	void *object_ptr; //0x0040 aka "this" pointer
}; //Size: 0x0048
static_assert(sizeof(MethodParams) == 0x48);

class REThreadContext
{
public:
	char pad_0000[80]; //0x0000
	class UnkThreadContextObject *unkPtr; //0x0050
	char pad_0058[32]; //0x0058
	int32_t referenceCount; //0x0078
	char pad_007C[4]; //0x007C
}; //Size: 0x0080
static_assert(sizeof(REThreadContext) == 0x80);

class UnkThreadContextObject
{
public:
	char pad_0000[24]; //0x0000
	void *unkPtr; //0x0018
	char pad_0020[240]; //0x0020
}; //Size: 0x0110
static_assert(sizeof(UnkThreadContextObject) == 0x110);

class N00004780
{
public:
	char pad_0000[136]; //0x0000
}; //Size: 0x0088
static_assert(sizeof(N00004780) == 0x88);

class N000047B9
{
public:
	char pad_0000[136]; //0x0000
}; //Size: 0x0088
static_assert(sizeof(N000047B9) == 0x88);

class N000047DB
{
public:
	char pad_0000[136]; //0x0000
}; //Size: 0x0088
static_assert(sizeof(N000047DB) == 0x88);

class N00004818
{
public:
	char pad_0000[136]; //0x0000
}; //Size: 0x0088
static_assert(sizeof(N00004818) == 0x88);

class N0000482C
{
public:
	char pad_0000[136]; //0x0000
}; //Size: 0x0088
static_assert(sizeof(N0000482C) == 0x88);

class N00004872
{
public:
	char pad_0000[136]; //0x0000
}; //Size: 0x0088
static_assert(sizeof(N00004872) == 0x88);