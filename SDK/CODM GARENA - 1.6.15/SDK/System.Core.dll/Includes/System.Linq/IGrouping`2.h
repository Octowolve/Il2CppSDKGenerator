#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class IGrouping2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "IGrouping`2"));
	}


	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(IGrouping2*))(Il2CppBase() + 0x0))(this);
	}

};

}
