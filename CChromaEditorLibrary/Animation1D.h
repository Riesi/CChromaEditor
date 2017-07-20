#pragma once

#include "ChromaSDKPluginTypes.h"

namespace ChromaSDK
{
	class Animation1D
	{
	public:
		EChromaSDKDevice1DEnum GetDevice();
		void SetDevice(EChromaSDKDevice1DEnum device);
	private:
		EChromaSDKDevice1DEnum _mDevice;
	};
}