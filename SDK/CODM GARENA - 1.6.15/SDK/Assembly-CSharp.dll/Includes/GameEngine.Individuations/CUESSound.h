#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class CUESSound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "CUESSound"));
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
	template <typename T = uint64_t> T& value1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& value2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& value3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& vec() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& vec2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& AssetObj() {
		return *(T*)((uintptr_t)this + 0x48);
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
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707D80))(this);
	}
	template <typename T = void> T set_eventType(uintptr_t value) {
		return ((T (*)(CUESSound*, uintptr_t))(Il2CppBase() + 0x3707D88))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707D90))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(CUESSound*, float))(Il2CppBase() + 0x3707D98))(this, value);
	}
	template <typename T = bool> T get_isActivate() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707DA0))(this);
	}
	template <typename T = void> T set_isActivate(bool value) {
		return ((T (*)(CUESSound*, bool))(Il2CppBase() + 0x3707DA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707DB0))(this);
	}
	template <typename T = void> T set_strValue(Il2CppString* value) {
		return ((T (*)(CUESSound*, Il2CppString*))(Il2CppBase() + 0x3707DB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue2() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707DC0))(this);
	}
	template <typename T = void> T set_strValue2(Il2CppString* value) {
		return ((T (*)(CUESSound*, Il2CppString*))(Il2CppBase() + 0x3707DC8))(this, value);
	}
	template <typename T = uint64_t> T get_value1() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707DD0))(this);
	}
	template <typename T = void> T set_value1(uint64_t value) {
		return ((T (*)(CUESSound*, uint64_t))(Il2CppBase() + 0x3707DD8))(this, value);
	}
	template <typename T = float> T get_value2() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707DE8))(this);
	}
	template <typename T = void> T set_value2(float value) {
		return ((T (*)(CUESSound*, float))(Il2CppBase() + 0x3707DF0))(this, value);
	}
	template <typename T = float> T get_value3() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707DF8))(this);
	}
	template <typename T = void> T set_value3(float value) {
		return ((T (*)(CUESSound*, float))(Il2CppBase() + 0x3707E00))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707E08))(this);
	}
	template <typename T = void> T set_vec(Il2CppVector3 value) {
		return ((T (*)(CUESSound*, Il2CppVector3))(Il2CppBase() + 0x3707E1C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec2() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707E28))(this);
	}
	template <typename T = void> T set_vec2(Il2CppVector3 value) {
		return ((T (*)(CUESSound*, Il2CppVector3))(Il2CppBase() + 0x3707E3C))(this, value);
	}
	template <typename T = uintptr_t> T get_AssetObj() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707E48))(this);
	}
	template <typename T = void> T set_AssetObj(uintptr_t value) {
		return ((T (*)(CUESSound*, uintptr_t))(Il2CppBase() + 0x3707E50))(this, value);
	}
	template <typename T = bool> T get_TickMode() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3707E58))(this);
	}
	template <typename T = bool> T Tick(float timeDelta, uintptr_t inActor) {
		return ((T (*)(CUESSound*, float, uintptr_t))(Il2CppBase() + 0x3707E60))(this, timeDelta, inActor);
	}
	template <typename T = void> T SetCallback(uintptr_t inCallback) {
		return ((T (*)(CUESSound*, uintptr_t))(Il2CppBase() + 0x3707F20))(this, inCallback);
	}
	template <typename T = void> T Init(uintptr_t inActor, float inAnimLen) {
		return ((T (*)(CUESSound*, uintptr_t, float))(Il2CppBase() + 0x3707FC0))(this, inActor, inAnimLen);
	}
	template <typename T = void> T shutdown() {
		return ((T (*)(CUESSound*))(Il2CppBase() + 0x3708074))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t inSrc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3704A3C))(0, inSrc);
	}

};

}
