#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class TaskAssetConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "TaskAssetConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Activity_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TaskAssetName() {
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
		return ((T (*)(TaskAssetConfig*))(Il2CppBase() + 0x30EE7B8))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(TaskAssetConfig*))(Il2CppBase() + 0x30EE858))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(TaskAssetConfig*, int32_t))(Il2CppBase() + 0x30EE860))(this, value);
	}
	template <typename T = int32_t> T get_Activity_id() {
		return ((T (*)(TaskAssetConfig*))(Il2CppBase() + 0x30EE868))(this);
	}
	template <typename T = void> T set_Activity_id(int32_t value) {
		return ((T (*)(TaskAssetConfig*, int32_t))(Il2CppBase() + 0x30EE870))(this, value);
	}
	template <typename T = Il2CppString*> T get_TaskAssetName() {
		return ((T (*)(TaskAssetConfig*))(Il2CppBase() + 0x30EE878))(this);
	}
	template <typename T = void> T set_TaskAssetName(Il2CppString* value) {
		return ((T (*)(TaskAssetConfig*, Il2CppString*))(Il2CppBase() + 0x30EE880))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(TaskAssetConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EE888))(this, bytes, position);
	}

};

}
