#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LuckyBoxTicketConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LuckyBoxTicketConfig"));
	}

	template <typename T = int32_t> T& TicketID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SkipPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkipID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(LuckyBoxTicketConfig*))(Il2CppBase() + 0x3777DFC))(this);
	}
	template <typename T = int32_t> T get_TicketID() {
		return ((T (*)(LuckyBoxTicketConfig*))(Il2CppBase() + 0x3777E9C))(this);
	}
	template <typename T = void> T set_TicketID(int32_t value) {
		return ((T (*)(LuckyBoxTicketConfig*, int32_t))(Il2CppBase() + 0x3777EA4))(this, value);
	}
	template <typename T = int32_t> T get_SkipPosition() {
		return ((T (*)(LuckyBoxTicketConfig*))(Il2CppBase() + 0x3777EAC))(this);
	}
	template <typename T = void> T set_SkipPosition(int32_t value) {
		return ((T (*)(LuckyBoxTicketConfig*, int32_t))(Il2CppBase() + 0x3777EB4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkipID() {
		return ((T (*)(LuckyBoxTicketConfig*))(Il2CppBase() + 0x3777EBC))(this);
	}
	template <typename T = void> T set_SkipID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LuckyBoxTicketConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3777EC4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LuckyBoxTicketConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3777ECC))(this, bytes, position);
	}

};

}
