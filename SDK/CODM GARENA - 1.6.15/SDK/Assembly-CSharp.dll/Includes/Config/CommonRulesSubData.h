#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CommonRulesSubData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CommonRulesSubData"));
	}

	template <typename T = Il2CppString*> T& _subTitle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _subContent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T set_SubTitle(Il2CppString* value) {
		return ((T (*)(CommonRulesSubData*, Il2CppString*))(Il2CppBase() + 0x462CE80))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubTitle() {
		return ((T (*)(CommonRulesSubData*))(Il2CppBase() + 0x462D274))(this);
	}
	template <typename T = void> T set_SubContent(Il2CppString* value) {
		return ((T (*)(CommonRulesSubData*, Il2CppString*))(Il2CppBase() + 0x462CE90))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubContent() {
		return ((T (*)(CommonRulesSubData*))(Il2CppBase() + 0x462D284))(this);
	}

};

}
