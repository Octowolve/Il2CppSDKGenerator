#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Networking {

class UploadHandlerRaw
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Networking", "UploadHandlerRaw"));
	}


	template <typename T = void> T InternalSetContentType(Il2CppString* newContentType) {
		return ((T (*)(UploadHandlerRaw*, Il2CppString*))(Il2CppBase() + 0x4ABD0B4))(this, newContentType);
	}
	template <typename T = void> T SetContentType(Il2CppString* newContentType) {
		return ((T (*)(UploadHandlerRaw*, Il2CppString*))(Il2CppBase() + 0x4ABD154))(this, newContentType);
	}

};

}
