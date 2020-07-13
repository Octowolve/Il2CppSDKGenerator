#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CSTlogIDConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CSTlogIDConfig"));
	}

	template <typename T = int32_t> T& Cstlog_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Cstlog_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Should_save_to_vng() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Cstlog_id() {
		return ((T (*)(CSTlogIDConfig*))(Il2CppBase() + 0x463C190))(this);
	}
	template <typename T = void> T set_Cstlog_id(int32_t value) {
		return ((T (*)(CSTlogIDConfig*, int32_t))(Il2CppBase() + 0x463C198))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cstlog_name() {
		return ((T (*)(CSTlogIDConfig*))(Il2CppBase() + 0x463C1A0))(this);
	}
	template <typename T = void> T set_Cstlog_name(Il2CppString* value) {
		return ((T (*)(CSTlogIDConfig*, Il2CppString*))(Il2CppBase() + 0x463C1A8))(this, value);
	}
	template <typename T = int32_t> T get_Should_save_to_vng() {
		return ((T (*)(CSTlogIDConfig*))(Il2CppBase() + 0x463C1B0))(this);
	}
	template <typename T = void> T set_Should_save_to_vng(int32_t value) {
		return ((T (*)(CSTlogIDConfig*, int32_t))(Il2CppBase() + 0x463C1B8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CSTlogIDConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463C1C0))(this, bytes, position);
	}

};

}
