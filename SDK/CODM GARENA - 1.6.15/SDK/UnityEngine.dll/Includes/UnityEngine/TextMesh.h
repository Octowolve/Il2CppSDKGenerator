#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TextMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TextMesh"));
	}


	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(TextMesh*, Il2CppString*))(Il2CppBase() + 0x4D30AB4))(this, value);
	}

};

}
