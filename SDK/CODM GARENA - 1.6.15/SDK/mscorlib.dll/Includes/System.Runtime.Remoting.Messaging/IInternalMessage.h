#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class IInternalMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "IInternalMessage"));
	}


	template <typename T = void> T set_Uri(Il2CppString* value) {
		return ((T (*)(IInternalMessage*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
