/*

import Link from 'next/link';
<Link> is used for client side navigational purposes and provides prefetching.

import clsx from 'clsx';
clsx helps create conditional and general behaviour to web components.

import Image from 'next/image'
Image for image components.

import { Lusitana } from 'next/font/google';
Specific font pulls.

'use client';
Specific client behaviour, needs to be researched thoroughly.

import { unstable_noStore as noStore, revalidatePath } from 'next/cache';
nstable_noStore as noStore, for disabling cache behaviour
revalidatePath allows you to purge cached data on-demand for a specific path.

import { useSearchParams, usePathname, useRouter, redirect, notFound } from 'next/navigation';
useSearchParams- Allows you to access the parameters of the current URL. 
usePathname - Lets you read the current URL's pathname. 
useRouter - Enables navigation between routes within client components programmatically.
redirect - Redirect the user to a specific route.
notFound - throws 404 error if an object is not found.

defaultValue vs. value / Controlled vs. Uncontrolled
If you're using state to manage the value of an input, you'd use the value attribute to make it a controlled component. 
This means React would manage the input's state.
However, since you're not using state, you can use defaultValue. 
This means the native input will manage its own state. This is okay since you're saving the search query to the URL instead of state.

import { useDebouncedCallback } from 'use-debounce';
prevents new query on every keystroke, saving resources.

formData component and its relevant functions.
https://developer.mozilla.org/en-US/docs/Web/API/FormData/append

import { z } from 'zod';
TypeScript-first schema declaration and validation library. Build complex data structures and provide robust validation.

import { sql } from '@vercel/postgres';
to receive sql from vercel, and do db ops.

import { useEffect } from 'react';
error.tsx needs to be a Client component.
takes error and reset.

*/