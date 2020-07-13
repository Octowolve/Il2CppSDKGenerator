#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IDisposable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IDisposable"));
	}


	template <typename T = void> T Dispose() {
		return ((T (*)(IDisposable*))(Il2CppBase() + 0x0))(this);
	}

};

}
