#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class Wrappers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "Wrappers"));
	}



};

}
