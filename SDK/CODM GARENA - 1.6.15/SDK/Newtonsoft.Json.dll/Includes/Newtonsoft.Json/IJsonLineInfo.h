#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class IJsonLineInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "IJsonLineInfo"));
	}


	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(IJsonLineInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(IJsonLineInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(IJsonLineInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}
