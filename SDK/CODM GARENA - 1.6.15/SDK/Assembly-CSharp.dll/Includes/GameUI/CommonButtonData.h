#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonButtonData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonButtonData"));
	}

	template <typename T = uintptr_t> T& m_Style() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_Context() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_Title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_Style() {
		return ((T (*)(CommonButtonData*))(Il2CppBase() + 0x3DF0B08))(this);
	}
	template <typename T = void> T set_Style(uintptr_t value) {
		return ((T (*)(CommonButtonData*, uintptr_t))(Il2CppBase() + 0x3DF0B10))(this, value);
	}
	template <typename T = int32_t> T get_Context() {
		return ((T (*)(CommonButtonData*))(Il2CppBase() + 0x3DF0B18))(this);
	}
	template <typename T = void> T set_Context(int32_t value) {
		return ((T (*)(CommonButtonData*, int32_t))(Il2CppBase() + 0x3DF0B20))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(CommonButtonData*))(Il2CppBase() + 0x3DF0B28))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(CommonButtonData*, Il2CppString*))(Il2CppBase() + 0x3DF0B30))(this, value);
	}

};

}
