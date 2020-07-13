#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class CUESEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "CUESEffect"));
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
	template <typename T = Il2CppString*> T& mStrValue2() {
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
	template <typename T = float> T& mLifeTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& mAnimationTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& mLoc() {
		return *(T*)((uintptr_t)this + 0x60);
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
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x3706504))(this);
	}
	template <typename T = void> T set_eventType(uintptr_t value) {
		return ((T (*)(CUESEffect*, uintptr_t))(Il2CppBase() + 0x370650C))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x3706514))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(CUESEffect*, float))(Il2CppBase() + 0x370651C))(this, value);
	}
	template <typename T = bool> T get_isActivate() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x3706524))(this);
	}
	template <typename T = void> T set_isActivate(bool value) {
		return ((T (*)(CUESEffect*, bool))(Il2CppBase() + 0x370652C))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x3706534))(this);
	}
	template <typename T = void> T set_strValue(Il2CppString* value) {
		return ((T (*)(CUESEffect*, Il2CppString*))(Il2CppBase() + 0x370653C))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue2() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x3706544))(this);
	}
	template <typename T = void> T set_strValue2(Il2CppString* value) {
		return ((T (*)(CUESEffect*, Il2CppString*))(Il2CppBase() + 0x370654C))(this, value);
	}
	template <typename T = uint64_t> T get_value1() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x3706554))(this);
	}
	template <typename T = void> T set_value1(uint64_t value) {
		return ((T (*)(CUESEffect*, uint64_t))(Il2CppBase() + 0x370655C))(this, value);
	}
	template <typename T = float> T get_value2() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x370656C))(this);
	}
	template <typename T = void> T set_value2(float value) {
		return ((T (*)(CUESEffect*, float))(Il2CppBase() + 0x3706574))(this, value);
	}
	template <typename T = float> T get_value3() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x370657C))(this);
	}
	template <typename T = void> T set_value3(float value) {
		return ((T (*)(CUESEffect*, float))(Il2CppBase() + 0x3706584))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x370658C))(this);
	}
	template <typename T = void> T set_vec(Il2CppVector3 value) {
		return ((T (*)(CUESEffect*, Il2CppVector3))(Il2CppBase() + 0x37065A0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec2() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x37065AC))(this);
	}
	template <typename T = void> T set_vec2(Il2CppVector3 value) {
		return ((T (*)(CUESEffect*, Il2CppVector3))(Il2CppBase() + 0x37065C0))(this, value);
	}
	template <typename T = uintptr_t> T get_AssetObj() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x37065CC))(this);
	}
	template <typename T = void> T set_AssetObj(uintptr_t value) {
		return ((T (*)(CUESEffect*, uintptr_t))(Il2CppBase() + 0x37065D4))(this, value);
	}
	template <typename T = bool> T get_TickMode() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x37065DC))(this);
	}
	template <typename T = bool> T Tick(float timeDelta, uintptr_t inActor) {
		return ((T (*)(CUESEffect*, float, uintptr_t))(Il2CppBase() + 0x37065E4))(this, timeDelta, inActor);
	}
	template <typename T = void> T SetCallback(uintptr_t inCallback) {
		return ((T (*)(CUESEffect*, uintptr_t))(Il2CppBase() + 0x3706784))(this, inCallback);
	}
	template <typename T = void> T Init(uintptr_t inActor, float inAnimLen) {
		return ((T (*)(CUESEffect*, uintptr_t, float))(Il2CppBase() + 0x3706824))(this, inActor, inAnimLen);
	}
	template <typename T = void> T OnLoadEquips(int32_t assetIDs, uintptr_t inObj) {
		return ((T (*)(CUESEffect*, int32_t, uintptr_t))(Il2CppBase() + 0x3706B58))(this, assetIDs, inObj);
	}
	template <typename T = void> T shutdown() {
		return ((T (*)(CUESEffect*))(Il2CppBase() + 0x370716C))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t inSrc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3704CD0))(0, inSrc);
	}

};

}
