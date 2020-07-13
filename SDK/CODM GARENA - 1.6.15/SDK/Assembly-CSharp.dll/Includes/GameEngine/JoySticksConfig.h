#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class JoySticksConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "JoySticksConfig"));
	}

	template <typename T = int32_t> T& CurrentVersion() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Configs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCacheConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoystickText4Tlog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = int32_t> static T GetVersion(Il2CppString* content) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2477F50))(0, content);
	}
	template <typename T = bool> T InitFromJson(Il2CppString* strJson) {
		return ((T (*)(JoySticksConfig*, Il2CppString*))(Il2CppBase() + 0x2478154))(this, strJson);
	}
	template <typename T = void> T ClearCacheConfig() {
		return ((T (*)(JoySticksConfig*))(Il2CppBase() + 0x2478488))(this);
	}
	template <typename T = Il2CppString*> T GetJson() {
		return ((T (*)(JoySticksConfig*))(Il2CppBase() + 0x247856C))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t e) {
		return ((T (*)(JoySticksConfig*, uintptr_t))(Il2CppBase() + 0x2478B40))(this, e);
	}
	template <typename T = void> T set_Item(uintptr_t e, uintptr_t value) {
		return ((T (*)(JoySticksConfig*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2478B84))(this, e, value);
	}
	template <typename T = uintptr_t> T get_Item_1(int32_t idx) {
		return ((T (*)(JoySticksConfig*, int32_t))(Il2CppBase() + 0x2478BF4))(this, idx);
	}
	template <typename T = void> T set_Item_1(int32_t idx, uintptr_t value) {
		return ((T (*)(JoySticksConfig*, int32_t, uintptr_t))(Il2CppBase() + 0x2478C38))(this, idx, value);
	}
	template <typename T = Il2CppString*> T GetJoystickText4Tlog() {
		return ((T (*)(JoySticksConfig*))(Il2CppBase() + 0x2478CA8))(this);
	}

};

}
