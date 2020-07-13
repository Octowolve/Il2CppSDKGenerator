#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FormItemModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FormItemModel"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& FileName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& FileContent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T set_Key(Il2CppString* value) {
		return ((T (*)(FormItemModel*, Il2CppString*))(Il2CppBase() + 0x51C1380))(this, value);
	}
	template <typename T = Il2CppString*> T get_Key() {
		return ((T (*)(FormItemModel*))(Il2CppBase() + 0x51C1388))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(FormItemModel*, Il2CppString*))(Il2CppBase() + 0x51C1390))(this, value);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(FormItemModel*))(Il2CppBase() + 0x51C1398))(this);
	}
	template <typename T = bool> T get_IsFile() {
		return ((T (*)(FormItemModel*))(Il2CppBase() + 0x51C13A0))(this);
	}
	template <typename T = void> T set_FileName(Il2CppString* value) {
		return ((T (*)(FormItemModel*, Il2CppString*))(Il2CppBase() + 0x51C1524))(this, value);
	}
	template <typename T = Il2CppString*> T get_FileName() {
		return ((T (*)(FormItemModel*))(Il2CppBase() + 0x51C151C))(this);
	}
	template <typename T = void> T set_FileContent(uintptr_t value) {
		return ((T (*)(FormItemModel*, uintptr_t))(Il2CppBase() + 0x51C152C))(this, value);
	}
	template <typename T = uintptr_t> T get_FileContent() {
		return ((T (*)(FormItemModel*))(Il2CppBase() + 0x51C1514))(this);
	}

};

}
