#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRMapDescConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRMapDescConfigConfig"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppList<int32_t>*>*> static T& SameMapIdDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_BR_LOADING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MapId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ModeName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& MapName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LoadingResource() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomMapDescInfoByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(BRMapDescConfigConfig*))(Il2CppBase() + 0x2D4E7F8))(this);
	}
	template <typename T = uintptr_t> static T GetRandomMapDescInfoByID(int32_t mapId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D4EB08))(0, mapId);
	}
	template <typename T = Il2CppString*> static T GetLoadingTexture(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D4EE94))(0, mapID);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRMapDescConfigConfig*))(Il2CppBase() + 0x2D4EFB8))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(BRMapDescConfigConfig*))(Il2CppBase() + 0x2D4EB00))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(BRMapDescConfigConfig*, int32_t))(Il2CppBase() + 0x2D4F088))(this, value);
	}
	template <typename T = int32_t> T get_MapId() {
		return ((T (*)(BRMapDescConfigConfig*))(Il2CppBase() + 0x2D4EAF8))(this);
	}
	template <typename T = void> T set_MapId(int32_t value) {
		return ((T (*)(BRMapDescConfigConfig*, int32_t))(Il2CppBase() + 0x2D4F090))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeName() {
		return ((T (*)(BRMapDescConfigConfig*))(Il2CppBase() + 0x2D4F098))(this);
	}
	template <typename T = void> T set_ModeName(Il2CppString* value) {
		return ((T (*)(BRMapDescConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D4F0A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapName() {
		return ((T (*)(BRMapDescConfigConfig*))(Il2CppBase() + 0x2D4F0A8))(this);
	}
	template <typename T = void> T set_MapName(Il2CppString* value) {
		return ((T (*)(BRMapDescConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D4F0B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LoadingResource() {
		return ((T (*)(BRMapDescConfigConfig*))(Il2CppBase() + 0x2D4EFB0))(this);
	}
	template <typename T = void> T set_LoadingResource(Il2CppString* value) {
		return ((T (*)(BRMapDescConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D4F0B8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRMapDescConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4F0C0))(this, bytes, position);
	}
	template <typename T = bool> static T GetRandomMapDescInfoByIDm__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D4F260))(0, e);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BRMapDescConfigConfig*))(Il2CppBase() + 0x2D4F268))(this);
	}

};

}
