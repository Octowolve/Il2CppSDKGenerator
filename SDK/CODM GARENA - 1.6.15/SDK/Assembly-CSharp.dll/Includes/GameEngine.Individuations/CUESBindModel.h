#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class CUESBindModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "CUESBindModel"));
	}

	template <typename T = uintptr_t> T& mEventType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& mTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mIsActivate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mStrValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& strValue2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& mValue1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mValue2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mValue3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& mVec() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& vec2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mObj() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mBindBone() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mActor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bones() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& mLifeTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& mTimeLost() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadEquips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Implicit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_eventType() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704F2C))(this);
	}
	template <typename T = void> T set_eventType(uintptr_t value) {
		return ((T (*)(CUESBindModel*, uintptr_t))(Il2CppBase() + 0x3704F34))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704F3C))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(CUESBindModel*, float))(Il2CppBase() + 0x3704F44))(this, value);
	}
	template <typename T = bool> T get_isActivate() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704F4C))(this);
	}
	template <typename T = void> T set_isActivate(bool value) {
		return ((T (*)(CUESBindModel*, bool))(Il2CppBase() + 0x3704F54))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704F5C))(this);
	}
	template <typename T = void> T set_strValue(Il2CppString* value) {
		return ((T (*)(CUESBindModel*, Il2CppString*))(Il2CppBase() + 0x3704F64))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue2() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704F6C))(this);
	}
	template <typename T = void> T set_strValue2(Il2CppString* value) {
		return ((T (*)(CUESBindModel*, Il2CppString*))(Il2CppBase() + 0x3704F74))(this, value);
	}
	template <typename T = uint64_t> T get_value1() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704F7C))(this);
	}
	template <typename T = void> T set_value1(uint64_t value) {
		return ((T (*)(CUESBindModel*, uint64_t))(Il2CppBase() + 0x3704F84))(this, value);
	}
	template <typename T = float> T get_value2() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704F94))(this);
	}
	template <typename T = void> T set_value2(float value) {
		return ((T (*)(CUESBindModel*, float))(Il2CppBase() + 0x3704F9C))(this, value);
	}
	template <typename T = float> T get_value3() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704FA4))(this);
	}
	template <typename T = void> T set_value3(float value) {
		return ((T (*)(CUESBindModel*, float))(Il2CppBase() + 0x3704FAC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704FB4))(this);
	}
	template <typename T = void> T set_vec(Il2CppVector3 value) {
		return ((T (*)(CUESBindModel*, Il2CppVector3))(Il2CppBase() + 0x3704FC8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec2() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704FD4))(this);
	}
	template <typename T = void> T set_vec2(Il2CppVector3 value) {
		return ((T (*)(CUESBindModel*, Il2CppVector3))(Il2CppBase() + 0x3704FE8))(this, value);
	}
	template <typename T = uintptr_t> T get_AssetObj() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3704FF4))(this);
	}
	template <typename T = void> T set_AssetObj(uintptr_t value) {
		return ((T (*)(CUESBindModel*, uintptr_t))(Il2CppBase() + 0x3704FFC))(this, value);
	}
	template <typename T = bool> T get_TickMode() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3705004))(this);
	}
	template <typename T = bool> T Tick(float timeDelta, uintptr_t inActor) {
		return ((T (*)(CUESBindModel*, float, uintptr_t))(Il2CppBase() + 0x370500C))(this, timeDelta, inActor);
	}
	template <typename T = void> T SetCallback(uintptr_t inCallback) {
		return ((T (*)(CUESBindModel*, uintptr_t))(Il2CppBase() + 0x37050E0))(this, inCallback);
	}
	template <typename T = void> T Init(uintptr_t inActor, float inAnimLen) {
		return ((T (*)(CUESBindModel*, uintptr_t, float))(Il2CppBase() + 0x3705180))(this, inActor, inAnimLen);
	}
	template <typename T = void> T OnLoadEquips(int32_t assetIDs, uintptr_t inObj) {
		return ((T (*)(CUESBindModel*, int32_t, uintptr_t))(Il2CppBase() + 0x37053E0))(this, assetIDs, inObj);
	}
	template <typename T = void> T shutdown() {
		return ((T (*)(CUESBindModel*))(Il2CppBase() + 0x3705E6C))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t inSrc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3704DAC))(0, inSrc);
	}

};

}
