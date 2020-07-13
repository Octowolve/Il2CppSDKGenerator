#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XCData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XCData"));
	}


	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XCData*))(Il2CppBase() + 0x51C3F88))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XCData*, uintptr_t))(Il2CppBase() + 0x51C3F90))(this, w);
	}

};

}
