#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class CUESFinish
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "CUESFinish"));
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
	template <typename T = uint64_t> T& value1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mValue2() {
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
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x370747C))(this);
	}
	template <typename T = void> T set_eventType(uintptr_t value) {
		return ((T (*)(CUESFinish*, uintptr_t))(Il2CppBase() + 0x3707484))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x370748C))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(CUESFinish*, float))(Il2CppBase() + 0x3707494))(this, value);
	}
	template <typename T = bool> T get_isActivate() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x370749C))(this);
	}
	template <typename T = void> T set_isActivate(bool value) {
		return ((T (*)(CUESFinish*, bool))(Il2CppBase() + 0x37074A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x37074AC))(this);
	}
	template <typename T = void> T set_strValue(Il2CppString* value) {
		return ((T (*)(CUESFinish*, Il2CppString*))(Il2CppBase() + 0x37074B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_strValue2() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x37074BC))(this);
	}
	template <typename T = void> T set_strValue2(Il2CppString* value) {
		return ((T (*)(CUESFinish*, Il2CppString*))(Il2CppBase() + 0x37074C4))(this, value);
	}
	template <typename T = uint64_t> T get_value1() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x37074CC))(this);
	}
	template <typename T = void> T set_value1(uint64_t value) {
		return ((T (*)(CUESFinish*, uint64_t))(Il2CppBase() + 0x37074D4))(this, value);
	}
	template <typename T = float> T get_value2() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x37074E4))(this);
	}
	template <typename T = void> T set_value2(float value) {
		return ((T (*)(CUESFinish*, float))(Il2CppBase() + 0x37074EC))(this, value);
	}
	template <typename T = float> T get_value3() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x37074F4))(this);
	}
	template <typename T = void> T set_value3(float value) {
		return ((T (*)(CUESFinish*, float))(Il2CppBase() + 0x37074FC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x3707504))(this);
	}
	template <typename T = void> T set_vec(Il2CppVector3 value) {
		return ((T (*)(CUESFinish*, Il2CppVector3))(Il2CppBase() + 0x3707518))(this, value);
	}
	template <typename T = Il2CppVector3> T get_vec2() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x3707524))(this);
	}
	template <typename T = void> T set_vec2(Il2CppVector3 value) {
		return ((T (*)(CUESFinish*, Il2CppVector3))(Il2CppBase() + 0x3707538))(this, value);
	}
	template <typename T = uintptr_t> T get_AssetObj() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x3707544))(this);
	}
	template <typename T = void> T set_AssetObj(uintptr_t value) {
		return ((T (*)(CUESFinish*, uintptr_t))(Il2CppBase() + 0x370754C))(this, value);
	}
	template <typename T = bool> T get_TickMode() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x3707554))(this);
	}
	template <typename T = bool> T Tick(float timeDelta, uintptr_t inActor) {
		return ((T (*)(CUESFinish*, float, uintptr_t))(Il2CppBase() + 0x370755C))(this, timeDelta, inActor);
	}
	template <typename T = void> T SetCallback(uintptr_t inCallback) {
		return ((T (*)(CUESFinish*, uintptr_t))(Il2CppBase() + 0x370761C))(this, inCallback);
	}
	template <typename T = void> T Init(uintptr_t inActor, float inAnimLen) {
		return ((T (*)(CUESFinish*, uintptr_t, float))(Il2CppBase() + 0x37076BC))(this, inActor, inAnimLen);
	}
	template <typename T = void> T shutdown() {
		return ((T (*)(CUESFinish*))(Il2CppBase() + 0x3707770))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t inSrc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3704B18))(0, inSrc);
	}

};

}
