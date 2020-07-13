#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XProcessingInstructionWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XProcessingInstructionWrapper"));
	}


	template <typename T = uintptr_t> T get_ProcessingInstruction() {
		return ((T (*)(XProcessingInstructionWrapper*))(Il2CppBase() + 0x40A3D68))(this);
	}
	template <typename T = Il2CppString*> T get_LocalName() {
		return ((T (*)(XProcessingInstructionWrapper*))(Il2CppBase() + 0x40A3DEC))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XProcessingInstructionWrapper*))(Il2CppBase() + 0x40A3E18))(this);
	}

};

}
