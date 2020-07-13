#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace hunter.UnityV5 {

class Test
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "hunter.UnityV5", "Test"));
	}



};

}
