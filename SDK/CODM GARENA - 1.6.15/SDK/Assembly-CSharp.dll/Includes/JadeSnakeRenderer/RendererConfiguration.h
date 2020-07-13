#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class RendererConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "RendererConfiguration"));
	}

	template <typename T = Il2CppString*> static T& defaultConfigurationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& defaultRendererExePath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& rendererExePath() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
