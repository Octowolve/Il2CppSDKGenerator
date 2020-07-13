#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XProcessingInstruction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XProcessingInstruction"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& data() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T get_Data() {
		return ((T (*)(XProcessingInstruction*))(Il2CppBase() + 0x51CDCA4))(this);
	}
	template <typename T = uintptr_t> T get_NodeType() {
		return ((T (*)(XProcessingInstruction*))(Il2CppBase() + 0x51CDFA0))(this);
	}
	template <typename T = Il2CppString*> T get_Target() {
		return ((T (*)(XProcessingInstruction*))(Il2CppBase() + 0x51CDC9C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t w) {
		return ((T (*)(XProcessingInstruction*, uintptr_t))(Il2CppBase() + 0x51CDFA8))(this, w);
	}

};

}
