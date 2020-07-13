#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class SmallXmlParserException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Xml", "SmallXmlParserException"));
	}

	template <typename T = int32_t> T& line() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& column() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
