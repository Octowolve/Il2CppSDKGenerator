#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class CUESHideModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "CUESHideModel"));
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
	template <typename T = Il2CppString*> T& strValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& strValue2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& mValue2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& value1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& value3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& vec() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& vec2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& AssetObj() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& mLifeTime() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Implicit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_eventType() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x37078AC))(this);
	}
	template <typename T = void> T set_eventType(uintptr_t value) {
		return ((T (*)(CUESHideModel*, uintptr_t))(Il2CppBase() + 0x37078B4))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x37078BC))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(CUESHideModel*, float))(Il2CppBase() + 0x37078C4))(this, value);
	}
	template <typename T = bool> T get_isActivate() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x37078CC))(this);
	}
	template <typename T = void> T set_isActivate(bool value) {
		return ((T (*)(CUESHideModel*, bool))(Il2CppBase() + 0x37078D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x37078DC))(this);
	}
	template <typename T = void> T set_strValue(Il2CppString* value) {
		return ((T (*)(CUESHideModel*, Il2CppString*))(Il2CppBase() + 0x37078E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue2() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x37078EC))(this);
	}
	template <typename T = void> T set_strValue2(Il2CppString* value) {
		return ((T (*)(CUESHideModel*, Il2CppString*))(Il2CppBase() + 0x37078F4))(this, value);
	}
	template <typename T = float> T get_value2() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x37078FC))(this);
	}
	template <typename T = void> T set_value2(float value) {
		return ((T (*)(CUESHideModel*, float))(Il2CppBase() + 0x3707904))(this, value);
	}
	template <typename T = uint64_t> T get_value1() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x370790C))(this);
	}
	template <typename T = void> T set_value1(uint64_t value) {
		return ((T (*)(CUESHideModel*, uint64_t))(Il2CppBase() + 0x3707914))(this, value);
	}
	template <typename T = float> T get_value3() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x3707924))(this);
	}
	template <typename T = void> T set_value3(float value) {
		return ((T (*)(CUESHideModel*, float))(Il2CppBase() + 0x370792C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x3707934))(this);
	}
	template <typename T = void> T set_vec(Il2CppVector3 value) {
		return ((T (*)(CUESHideModel*, Il2CppVector3))(Il2CppBase() + 0x3707948))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec2() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x3707954))(this);
	}
	template <typename T = void> T set_vec2(Il2CppVector3 value) {
		return ((T (*)(CUESHideModel*, Il2CppVector3))(Il2CppBase() + 0x3707968))(this, value);
	}
	template <typename T = uintptr_t> T get_AssetObj() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x3707974))(this);
	}
	template <typename T = void> T set_AssetObj(uintptr_t value) {
		return ((T (*)(CUESHideModel*, uintptr_t))(Il2CppBase() + 0x370797C))(this, value);
	}
	template <typename T = bool> T get_TickMode() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x3707984))(this);
	}
	template <typename T = bool> T Tick(float timeDelta, uintptr_t inActor) {
		return ((T (*)(CUESHideModel*, float, uintptr_t))(Il2CppBase() + 0x370798C))(this, timeDelta, inActor);
	}
	template <typename T = void> T SetCallback(uintptr_t inCallback) {
		return ((T (*)(CUESHideModel*, uintptr_t))(Il2CppBase() + 0x3707A84))(this, inCallback);
	}
	template <typename T = void> T Init(uintptr_t inActor, float inAnimLen) {
		return ((T (*)(CUESHideModel*, uintptr_t, float))(Il2CppBase() + 0x3707B2C))(this, inActor, inAnimLen);
	}
	template <typename T = void> T shutdown() {
		return ((T (*)(CUESHideModel*))(Il2CppBase() + 0x3707C24))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t inSrc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3704BF4))(0, inSrc);
	}

};

}
