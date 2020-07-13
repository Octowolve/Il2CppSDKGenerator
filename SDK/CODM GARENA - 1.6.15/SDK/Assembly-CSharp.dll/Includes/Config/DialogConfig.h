#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DialogConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DialogConfig"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Style() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Voice() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x20);
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

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4642160))(this);
	}
	template <typename T = Il2CppString*> T get_Key() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4642200))(this);
	}
	template <typename T = void> T set_Key(Il2CppString* value) {
		return ((T (*)(DialogConfig*, Il2CppString*))(Il2CppBase() + 0x4642208))(this, value);
	}
	template <typename T = Il2CppString*> T get_Style() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4642210))(this);
	}
	template <typename T = void> T set_Style(Il2CppString* value) {
		return ((T (*)(DialogConfig*, Il2CppString*))(Il2CppBase() + 0x4642218))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4642220))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(DialogConfig*, Il2CppString*))(Il2CppBase() + 0x4642228))(this, value);
	}
	template <typename T = Il2CppString*> T get_Content() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4642230))(this);
	}
	template <typename T = void> T set_Content(Il2CppString* value) {
		return ((T (*)(DialogConfig*, Il2CppString*))(Il2CppBase() + 0x4642238))(this, value);
	}
	template <typename T = Il2CppString*> T get_Voice() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4642240))(this);
	}
	template <typename T = void> T set_Voice(Il2CppString* value) {
		return ((T (*)(DialogConfig*, Il2CppString*))(Il2CppBase() + 0x4642248))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(DialogConfig*))(Il2CppBase() + 0x4642250))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(DialogConfig*, int32_t))(Il2CppBase() + 0x4642258))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(DialogConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4642260))(this, bytes, position);
	}

};

}
