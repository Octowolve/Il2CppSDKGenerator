#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BuffEffectDescConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BuffEffectDescConfig"));
	}

	template <typename T = int32_t> T& EffectType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& EffectSvrName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& EffectDesc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& EffectParam1Str() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& EffectParam1OperStr() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& EffectParam2Str() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& EffectParam2OperStr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_EffectType() {
		return ((T (*)(BuffEffectDescConfig*))(Il2CppBase() + 0x2D5A208))(this);
	}
	template <typename T = void> T set_EffectType(int32_t value) {
		return ((T (*)(BuffEffectDescConfig*, int32_t))(Il2CppBase() + 0x2D5A210))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectName() {
		return ((T (*)(BuffEffectDescConfig*))(Il2CppBase() + 0x2D5A218))(this);
	}
	template <typename T = void> T set_EffectName(Il2CppString* value) {
		return ((T (*)(BuffEffectDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A220))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectSvrName() {
		return ((T (*)(BuffEffectDescConfig*))(Il2CppBase() + 0x2D5A228))(this);
	}
	template <typename T = void> T set_EffectSvrName(Il2CppString* value) {
		return ((T (*)(BuffEffectDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A230))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectDesc() {
		return ((T (*)(BuffEffectDescConfig*))(Il2CppBase() + 0x2D5A238))(this);
	}
	template <typename T = void> T set_EffectDesc(Il2CppString* value) {
		return ((T (*)(BuffEffectDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A240))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam1Str() {
		return ((T (*)(BuffEffectDescConfig*))(Il2CppBase() + 0x2D5A248))(this);
	}
	template <typename T = void> T set_EffectParam1Str(Il2CppString* value) {
		return ((T (*)(BuffEffectDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A250))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam1OperStr() {
		return ((T (*)(BuffEffectDescConfig*))(Il2CppBase() + 0x2D5A258))(this);
	}
	template <typename T = void> T set_EffectParam1OperStr(Il2CppString* value) {
		return ((T (*)(BuffEffectDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A260))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam2Str() {
		return ((T (*)(BuffEffectDescConfig*))(Il2CppBase() + 0x2D5A268))(this);
	}
	template <typename T = void> T set_EffectParam2Str(Il2CppString* value) {
		return ((T (*)(BuffEffectDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A270))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam2OperStr() {
		return ((T (*)(BuffEffectDescConfig*))(Il2CppBase() + 0x2D5A278))(this);
	}
	template <typename T = void> T set_EffectParam2OperStr(Il2CppString* value) {
		return ((T (*)(BuffEffectDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A280))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BuffEffectDescConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5A288))(this, bytes, position);
	}

};

}
