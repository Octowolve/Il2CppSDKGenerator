#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BuffEventDescConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BuffEventDescConfig"));
	}

	template <typename T = int32_t> T& EventType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& EventName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& EventDesc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& EventParamStr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& EventParamOper() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_EventType() {
		return ((T (*)(BuffEventDescConfig*))(Il2CppBase() + 0x2D5A528))(this);
	}
	template <typename T = void> T set_EventType(int32_t value) {
		return ((T (*)(BuffEventDescConfig*, int32_t))(Il2CppBase() + 0x2D5A530))(this, value);
	}
	template <typename T = Il2CppString*> T get_EventName() {
		return ((T (*)(BuffEventDescConfig*))(Il2CppBase() + 0x2D5A538))(this);
	}
	template <typename T = void> T set_EventName(Il2CppString* value) {
		return ((T (*)(BuffEventDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A540))(this, value);
	}
	template <typename T = Il2CppString*> T get_EventDesc() {
		return ((T (*)(BuffEventDescConfig*))(Il2CppBase() + 0x2D5A548))(this);
	}
	template <typename T = void> T set_EventDesc(Il2CppString* value) {
		return ((T (*)(BuffEventDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A550))(this, value);
	}
	template <typename T = Il2CppString*> T get_EventParamStr() {
		return ((T (*)(BuffEventDescConfig*))(Il2CppBase() + 0x2D5A558))(this);
	}
	template <typename T = void> T set_EventParamStr(Il2CppString* value) {
		return ((T (*)(BuffEventDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A560))(this, value);
	}
	template <typename T = Il2CppString*> T get_EventParamOper() {
		return ((T (*)(BuffEventDescConfig*))(Il2CppBase() + 0x2D5A568))(this);
	}
	template <typename T = void> T set_EventParamOper(Il2CppString* value) {
		return ((T (*)(BuffEventDescConfig*, Il2CppString*))(Il2CppBase() + 0x2D5A570))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BuffEventDescConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5A578))(this, bytes, position);
	}

};

}
