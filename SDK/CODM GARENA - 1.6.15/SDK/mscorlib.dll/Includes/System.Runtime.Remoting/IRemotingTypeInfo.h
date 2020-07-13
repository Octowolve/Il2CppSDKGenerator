#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class IRemotingTypeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "IRemotingTypeInfo"));
	}


	template <typename T = Il2CppString*> T get_TypeName() {
		return ((T (*)(IRemotingTypeInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}
