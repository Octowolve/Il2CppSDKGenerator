#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class IIOHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "IIOHelper"));
	}



};

}
