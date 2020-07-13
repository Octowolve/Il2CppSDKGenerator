#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IRankTabConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IRankTabConfig"));
	}


	template <typename T = int32_t> T get_TagID() {
		return ((T (*)(IRankTabConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_TagType() {
		return ((T (*)(IRankTabConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_EnumValue() {
		return ((T (*)(IRankTabConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_ShareValue() {
		return ((T (*)(IRankTabConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_UITips() {
		return ((T (*)(IRankTabConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IRankTabConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_UIRankParam1() {
		return ((T (*)(IRankTabConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_UIRankParam2() {
		return ((T (*)(IRankTabConfig*))(Il2CppBase() + 0x0))(this);
	}

};

}
