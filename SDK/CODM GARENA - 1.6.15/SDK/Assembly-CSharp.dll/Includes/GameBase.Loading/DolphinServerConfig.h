#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class DolphinServerConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "DolphinServerConfig"));
	}

	template <typename T = Il2CppString*> T& DOLPHIN_GCLOUD_UPDATE_URL() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& DOLPHIN_GCLOUD_CHANNEL_ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& DEFAULT_USER_ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& DEFAULT_SERVER_ID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IS_GRAY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDolphinServerConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_DOLPHIN_GCLOUD_UPDATE_URL() {
		return ((T (*)(DolphinServerConfig*))(Il2CppBase() + 0x2E34178))(this);
	}
	template <typename T = void> T set_DOLPHIN_GCLOUD_UPDATE_URL(Il2CppString* value) {
		return ((T (*)(DolphinServerConfig*, Il2CppString*))(Il2CppBase() + 0x2E363FC))(this, value);
	}
	template <typename T = uint32_t> T get_DOLPHIN_GCLOUD_CHANNEL_ID() {
		return ((T (*)(DolphinServerConfig*))(Il2CppBase() + 0x2E34180))(this);
	}
	template <typename T = void> T set_DOLPHIN_GCLOUD_CHANNEL_ID(uint32_t value) {
		return ((T (*)(DolphinServerConfig*, uint32_t))(Il2CppBase() + 0x2E36404))(this, value);
	}
	template <typename T = Il2CppString*> T get_DEFAULT_USER_ID() {
		return ((T (*)(DolphinServerConfig*))(Il2CppBase() + 0x2E34188))(this);
	}
	template <typename T = void> T set_DEFAULT_USER_ID(Il2CppString* value) {
		return ((T (*)(DolphinServerConfig*, Il2CppString*))(Il2CppBase() + 0x2E3640C))(this, value);
	}
	template <typename T = Il2CppString*> T get_DEFAULT_SERVER_ID() {
		return ((T (*)(DolphinServerConfig*))(Il2CppBase() + 0x2E34190))(this);
	}
	template <typename T = void> T set_DEFAULT_SERVER_ID(Il2CppString* value) {
		return ((T (*)(DolphinServerConfig*, Il2CppString*))(Il2CppBase() + 0x2E36414))(this, value);
	}
	template <typename T = bool> T get_IS_GRAY() {
		return ((T (*)(DolphinServerConfig*))(Il2CppBase() + 0x2E34198))(this);
	}
	template <typename T = void> T set_IS_GRAY(bool value) {
		return ((T (*)(DolphinServerConfig*, bool))(Il2CppBase() + 0x2E3641C))(this, value);
	}
	template <typename T = uintptr_t> static T GetDolphinServerConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E30800))(0);
	}

};

}
