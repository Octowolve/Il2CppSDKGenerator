#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MissingFieldException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MissingFieldException"));
	}


	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(MissingFieldException*))(Il2CppBase() + 0x454E294))(this);
	}

};

}
