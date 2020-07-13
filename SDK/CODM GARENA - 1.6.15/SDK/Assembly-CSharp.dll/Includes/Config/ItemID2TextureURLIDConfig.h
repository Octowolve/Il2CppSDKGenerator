#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ItemID2TextureURLIDConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ItemID2TextureURLIDConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& CDN_Path() {
		return *(T*)((uintptr_t)this + 0x10);
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
		return ((T (*)(ItemID2TextureURLIDConfig*))(Il2CppBase() + 0x376B070))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ItemID2TextureURLIDConfig*))(Il2CppBase() + 0x376B110))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ItemID2TextureURLIDConfig*, int32_t))(Il2CppBase() + 0x376B118))(this, value);
	}
	template <typename T = Il2CppString*> T get_CDN_Path() {
		return ((T (*)(ItemID2TextureURLIDConfig*))(Il2CppBase() + 0x376B120))(this);
	}
	template <typename T = void> T set_CDN_Path(Il2CppString* value) {
		return ((T (*)(ItemID2TextureURLIDConfig*, Il2CppString*))(Il2CppBase() + 0x376B128))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ItemID2TextureURLIDConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376B130))(this, bytes, position);
	}

};

}
