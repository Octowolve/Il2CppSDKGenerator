#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LobbySceneRenderSettingsConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LobbySceneRenderSettingsConfig"));
	}

	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& FogColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& FogMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FogDensity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FogHeightAtten() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& FogHeightOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& FogStartDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& ShadowDistance() {
		return *(T*)((uintptr_t)this + 0x28);
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
		return ((T (*)(LobbySceneRenderSettingsConfig*))(Il2CppBase() + 0x3776A98))(this);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(LobbySceneRenderSettingsConfig*))(Il2CppBase() + 0x3776B38))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(LobbySceneRenderSettingsConfig*, int32_t))(Il2CppBase() + 0x3776B40))(this, value);
	}
	template <typename T = Il2CppString*> T get_FogColor() {
		return ((T (*)(LobbySceneRenderSettingsConfig*))(Il2CppBase() + 0x3776B48))(this);
	}
	template <typename T = void> T set_FogColor(Il2CppString* value) {
		return ((T (*)(LobbySceneRenderSettingsConfig*, Il2CppString*))(Il2CppBase() + 0x3776B50))(this, value);
	}
	template <typename T = int32_t> T get_FogMode() {
		return ((T (*)(LobbySceneRenderSettingsConfig*))(Il2CppBase() + 0x3776B58))(this);
	}
	template <typename T = void> T set_FogMode(int32_t value) {
		return ((T (*)(LobbySceneRenderSettingsConfig*, int32_t))(Il2CppBase() + 0x3776B60))(this, value);
	}
	template <typename T = float> T get_FogDensity() {
		return ((T (*)(LobbySceneRenderSettingsConfig*))(Il2CppBase() + 0x3776B68))(this);
	}
	template <typename T = void> T set_FogDensity(float value) {
		return ((T (*)(LobbySceneRenderSettingsConfig*, float))(Il2CppBase() + 0x3776B70))(this, value);
	}
	template <typename T = float> T get_FogHeightAtten() {
		return ((T (*)(LobbySceneRenderSettingsConfig*))(Il2CppBase() + 0x3776B78))(this);
	}
	template <typename T = void> T set_FogHeightAtten(float value) {
		return ((T (*)(LobbySceneRenderSettingsConfig*, float))(Il2CppBase() + 0x3776B80))(this, value);
	}
	template <typename T = float> T get_FogHeightOffset() {
		return ((T (*)(LobbySceneRenderSettingsConfig*))(Il2CppBase() + 0x3776B88))(this);
	}
	template <typename T = void> T set_FogHeightOffset(float value) {
		return ((T (*)(LobbySceneRenderSettingsConfig*, float))(Il2CppBase() + 0x3776B90))(this, value);
	}
	template <typename T = float> T get_FogStartDistance() {
		return ((T (*)(LobbySceneRenderSettingsConfig*))(Il2CppBase() + 0x3776B98))(this);
	}
	template <typename T = void> T set_FogStartDistance(float value) {
		return ((T (*)(LobbySceneRenderSettingsConfig*, float))(Il2CppBase() + 0x3776BA0))(this, value);
	}
	template <typename T = float> T get_ShadowDistance() {
		return ((T (*)(LobbySceneRenderSettingsConfig*))(Il2CppBase() + 0x3776BA8))(this);
	}
	template <typename T = void> T set_ShadowDistance(float value) {
		return ((T (*)(LobbySceneRenderSettingsConfig*, float))(Il2CppBase() + 0x3776BB0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LobbySceneRenderSettingsConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3776BB8))(this, bytes, position);
	}

};

}
