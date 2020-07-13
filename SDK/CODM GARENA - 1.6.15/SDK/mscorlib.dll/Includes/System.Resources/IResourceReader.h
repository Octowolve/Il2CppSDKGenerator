#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Resources {

class IResourceReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Resources", "IResourceReader"));
	}


	template <typename T = void> T Close() {
		return ((T (*)(IResourceReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(IResourceReader*))(Il2CppBase() + 0x0))(this);
	}

};

}
