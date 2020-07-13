#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class Comments
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "Comments"));
	}

	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
