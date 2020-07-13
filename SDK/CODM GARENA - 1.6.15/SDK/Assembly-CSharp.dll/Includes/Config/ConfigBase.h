#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigBase"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& ConfigDic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadPatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadPatchField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ConfigBase*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, bytes, position);
	}
	template <typename T = void> T Set(Il2CppString* key, uintptr_t value) {
		return ((T (*)(ConfigBase*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x462FA84))(this, key, value);
	}
	template <typename T = uintptr_t> T Get(Il2CppString* name) {
		return ((T (*)(ConfigBase*, Il2CppString*))(Il2CppBase() + 0x4E58E50))(this, name);
	}
	template <typename T = uintptr_t> T get_Item(Il2CppString* key) {
		return ((T (*)(ConfigBase*, Il2CppString*))(Il2CppBase() + 0x462FBCC))(this, key);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ConfigBase*))(Il2CppBase() + 0x462D1DC))(this);
	}
	template <typename T = void> T Init(Il2CppArray<uintptr_t>* bytes, uintptr_t rowPosition, Il2CppArray<uintptr_t>* columnList) {
		return ((T (*)(ConfigBase*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x462FC58))(this, bytes, rowPosition, columnList);
	}
	template <typename T = void> T Read(Il2CppArray<uintptr_t>* bytes, uintptr_t rowPosition, Il2CppArray<uintptr_t>* columnList) {
		return ((T (*)(ConfigBase*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x462FD44))(this, bytes, rowPosition, columnList);
	}
	template <typename T = void> T ReadPatch(Il2CppArray<uintptr_t>* bytes, uintptr_t position, Il2CppArray<uintptr_t>* columnList, int32_t fixedFieldCount) {
		return ((T (*)(ConfigBase*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x462FE58))(this, bytes, position, columnList, fixedFieldCount);
	}
	template <typename T = void> T ReadPatchField(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t header) {
		return ((T (*)(ConfigBase*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x462FF78))(this, bytes, position, header);
	}

};

}
