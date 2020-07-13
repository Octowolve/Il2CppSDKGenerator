#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class JsMeshLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "JsMeshLight"));
	}

	template <typename T = uintptr_t> T& lightMesh() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
