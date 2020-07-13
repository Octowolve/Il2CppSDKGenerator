#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LevelUpTaskItemConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LevelUpTaskItemConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TitleDesc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& GoPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ThirdTab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& GoUrl() {
		return *(T*)((uintptr_t)this + 0x24);
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
		return ((T (*)(LevelUpTaskItemConfig*))(Il2CppBase() + 0x37735BC))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(LevelUpTaskItemConfig*))(Il2CppBase() + 0x377365C))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(LevelUpTaskItemConfig*, int32_t))(Il2CppBase() + 0x3773664))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(LevelUpTaskItemConfig*))(Il2CppBase() + 0x377366C))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(LevelUpTaskItemConfig*, Il2CppString*))(Il2CppBase() + 0x3773674))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(LevelUpTaskItemConfig*))(Il2CppBase() + 0x377367C))(this);
	}
	template <typename T = Il2CppString*> T get_TitleDesc() {
		return ((T (*)(LevelUpTaskItemConfig*))(Il2CppBase() + 0x377368C))(this);
	}
	template <typename T = void> T set_TitleDesc(Il2CppString* value) {
		return ((T (*)(LevelUpTaskItemConfig*, Il2CppString*))(Il2CppBase() + 0x3773694))(this, value);
	}
	template <typename T = int32_t> T get_GoPos() {
		return ((T (*)(LevelUpTaskItemConfig*))(Il2CppBase() + 0x377369C))(this);
	}
	template <typename T = void> T set_GoPos(int32_t value) {
		return ((T (*)(LevelUpTaskItemConfig*, int32_t))(Il2CppBase() + 0x37736A4))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(LevelUpTaskItemConfig*))(Il2CppBase() + 0x37736AC))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(LevelUpTaskItemConfig*, int32_t))(Il2CppBase() + 0x37736B4))(this, value);
	}
	template <typename T = int32_t> T get_ThirdTab() {
		return ((T (*)(LevelUpTaskItemConfig*))(Il2CppBase() + 0x37736BC))(this);
	}
	template <typename T = void> T set_ThirdTab(int32_t value) {
		return ((T (*)(LevelUpTaskItemConfig*, int32_t))(Il2CppBase() + 0x37736C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoUrl() {
		return ((T (*)(LevelUpTaskItemConfig*))(Il2CppBase() + 0x37736CC))(this);
	}
	template <typename T = void> T set_GoUrl(Il2CppString* value) {
		return ((T (*)(LevelUpTaskItemConfig*, Il2CppString*))(Il2CppBase() + 0x37736D4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LevelUpTaskItemConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37736DC))(this, bytes, position);
	}

};

}
