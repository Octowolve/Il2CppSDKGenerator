#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UriFormatException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System", "UriFormatException"));
	}


	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(UriFormatException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AF4E74))(this, info, context);
	}

};

}
