#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class FirstShareRewardSceneConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "FirstShareRewardSceneConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Num() {
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
		return ((T (*)(FirstShareRewardSceneConfig*))(Il2CppBase() + 0x4644898))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(FirstShareRewardSceneConfig*))(Il2CppBase() + 0x4644938))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(FirstShareRewardSceneConfig*, int32_t))(Il2CppBase() + 0x4644940))(this, value);
	}
	template <typename T = int32_t> T get_Num() {
		return ((T (*)(FirstShareRewardSceneConfig*))(Il2CppBase() + 0x4644948))(this);
	}
	template <typename T = void> T set_Num(int32_t value) {
		return ((T (*)(FirstShareRewardSceneConfig*, int32_t))(Il2CppBase() + 0x4644950))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(FirstShareRewardSceneConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4644958))(this, bytes, position);
	}

};

}
