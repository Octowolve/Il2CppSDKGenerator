#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class IDynamicProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IDynamicProperty"));
	}


	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IDynamicProperty*))(Il2CppBase() + 0x0))(this);
	}

};

}
